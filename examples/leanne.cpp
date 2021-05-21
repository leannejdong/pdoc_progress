#include "../include/ProgressBar.hpp"
#include <unistd.h>

unsigned int micros = 1000000; // microseconds to seconds

static void ursula(){
      ProgressBar foo('.', '#', 30);

      foo.done = 0;
      foo.todo = foo.getSize();

      std::cout << "Nonlinear Hydraulic Network\n";

      for(int i = 0; i < foo.getSize(); i++)
      {
        foo.done++;
        usleep(0.1 * micros); // A delay of 0.1 second(s)
        foo.fillUp();
        foo.displayPercentage();
        std::cout << " | ";
        foo.displayTasksDone();
      }

      foo.end();

      std::cout << "Parser done, incidence matrix derived!\n";
      std::cout << "Have set up git+overleaf integration, git submodule for Majid, Leanne&Ursula's joint paper\n";
      std::cout << "Some discussion on writing the theory component\n";
      std::cout << "Wait for Majid's update for circuit automation algorithm & derivation of nonlinear equations system\n";

}

static void Jia(){

      ProgressBar foo('.', '#', 30);

      foo.done = 0;
      foo.todo = foo.getSize();

      std::cout << "Sparse optimal tree\n";

      for(int i = 0; i < foo.getSize(); i++)
      {
        foo.done++;
        usleep(0.1 * micros); // A delay of 0.1 second(s)
        foo.fillUp();
        foo.displayPercentage();
        std::cout << " | ";
        foo.displayTasksDone();
      }

      foo.end();

      std::cout << "Version 1 done, 5 tests done, \n"
                <<  "Profilling partially done, \n"
                << "Doing profiling&performance optimization, \n"
                << "Resolving false-sharing bugs in multithreading\n"
                << "Refactoring\n"
                << "Continue write-up\n"
                << "Explain small amount of things but in details, especially codes...\n";
}

int main()
{
      ursula();
      std::cout << "\n";
      Jia();
      return 0;
}
