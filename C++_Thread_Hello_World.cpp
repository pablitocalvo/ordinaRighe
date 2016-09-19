/***********************************************************************
* FILE: C++_Thread_Hello_World.cpp
* DESCRIPTION:
*   A Threated "hello world" C++11 program.
*   New Standard, supported by most c++ compiler
*   Microsoft Visual C++ for example.
* 
* AUTHOR: Paolo 
* LAST REVISED: 19/09/2016
*
************************************************************************/

// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
 
void foo() 
{ std::cout << "Hello World , from thread # ";
  // do stuff...
}

void bar(int x)
{
  // do stuff...
}

int main() 
{
  std::thread first (foo);     // spawn new thread that calls foo()
  std::thread second (foo);     // spawn new thread that calls foo()
  
  
   // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes
return 0;
}
