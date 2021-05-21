#include "../include/ProgressBar.hpp"
#include "unistd.h"
#include "fmt/format.h"
/* Defining the constructor */
ProgressBar::ProgressBar(char notDoneChar, char doneChar, unsigned int size)
:c(doneChar), ch(notDoneChar), size(size), todo(0), done(0)
{
	if(size <= 100)
	{
		size = size;	
	}
	else{
		size = 100;
	}
	bar.push_back('[');
	for(int i = 1; i < size + 1; ++i)
	{
		bar.push_back(ch);
	}

	bar.push_back(']');
}

/* Defining fillUpCells */
void ProgressBar::fillUpCells(unsigned int cells)
{
	pos = 0;
	for(int i = 1; i < cells; ++i)
	{
		bar[i] = c;
		std::cout << '\r';
		for(int j = 0; j < bar.size(); ++j)
		{
			std::cout << bar[j] << std::flush;
		}
	}
	pos += cells;
}

/* Defining fillUp */
void ProgressBar::fillUp()
{
	bar[pos] = c;
	pos++;

    std::cout << '\r';

    for(int i = 0; i < bar.size(); ++i)
	{
		std::cout << bar[i] << std::flush;
	}
}

/* Displays the percentage beside the bar */
void ProgressBar::displayPercentage()
{
	float percent =   (float)(pos) / (float)(bar.size() - 1) * 100;
	fmt::print("{}%", (int)percent);
    //std::cout << (int)percent << "%";
}

/* Shows tasks done out of the tasks to be done */
void ProgressBar::displayTasksDone()
{
	std::cout << '(' << done << '/' <<  todo << ')' << std::flush;
}

/* Returns the size of the progress bar */

unsigned int ProgressBar::getSize()
{
	return bar.size() - 2;
}

void ProgressBar::end()
{
	//std::cout << "\n";
    fmt::print("\n");
}

void ProgressBar::do_task() {
    unsigned int micros = 1000000; // microseconds to seconds

    ProgressBar foo('.', '#', 30);

    foo.done = 0;
    foo.todo = foo.getSize();
    for(int i = 0; i < foo.getSize(); i++)
    {
        foo.done++;
        usleep(0.1 * micros); // A delay of 0.1 second(s)
        foo.fillUp();
        foo.displayPercentage();
        fmt::print(" | ");
        //std::cout << " | ";
        foo.displayTasksDone();
    }
    foo.end();
}
