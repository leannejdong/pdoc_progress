#include "../include/ProgressBar.hpp"
#include <unistd.h>

//unsigned int micros = 1000000; // microseconds to seconds



static void ursula(){
    ProgressBar foo('.', '#', 30);

    foo.done = 0;
    foo.todo = foo.getSize();

    std::cout << "Nonlinear Hydraulic Network\n";
    foo.do_task();
    std::cout << "Parser done, incidence matrix derived!\n";
    foo.do_task();
    std::cout << "Added unit tests \n";
    foo.do_task();
    std::cout << "Have set up git+overleaf integration, git submodule for Majid, Leanne&Ursula's joint paper\n";
    foo.do_task();
    std::cout << "Some discussion on writing the theory component\n";
    std::cout << "To-do\n";
    std::cout << "Majid has been illed from taking vaccine\n";
    std::cout << "Wait for Majid's update for circuit automation algorithm & derivation of nonlinear equations system\n";

}

static void Jia(){

    ProgressBar foo('.', '#', 30);

    foo.done = 0;
    foo.todo = foo.getSize();

    std::cout << "Multiway Optimal Sparse decision tree\n";
    foo.do_task();
    std::cout << "Version 1 done, added 5 tests, \n";
    foo.do_task();
    std::cout << "To-do\n";
    std::cout << "Profilling partially done, \n"
            << "Doing profiling&performance optimization, \n"
            << "Resolving false-sharing bugs in multithreading\n"
            << "Refactoring\n"
            << "Continue write-up, "
            << "Try to explain small amount of things but in details, especially codes...\n"
            << "Fix an error in the python interface\n";
}

int main()
{
      ursula();
      std::cout << "\n";
      Jia();
      return 0;
}
