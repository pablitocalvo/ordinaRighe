/***********************************************************************
* FILE: C_Ghetto_Thread.cpp
* DESCRIPTION:
*   A "hello world" Pthreads program.  Demonstrates thread creation and
*   termination.
* AUTHOR: Blaise Barney
* LAST REVISED: 08/09/11
* https://computing.llnl.gov/tutorials/pthreads/samples/hello.c
************************************************************************
* modificato per "portarlo" in ghetto_C 
* modificato le librerie standard c in standard c++
* ma lasciato la libreria c pthread.h 
* ......*/


// è una libreria del c, uso la "nuova"  <iostream> , non uso printf !!
// sono un programmatore c++ ....
//#include <stdio.h>
// vedi http://www.cplusplus.com/reference/cstdio/

#include <iostream> 


// è una libreria del c, uso la "nuova"  
//#include <stdlib.h>
// vedi c++: http://www.cplusplus.com/reference/cstdlib/

#include <cstdlib>

// è una libreria del c non standard ( ma standard POSIX !! ), 
// la uso in ambiente c++ / LINUX  !
#include <pthread.h>



#define NUM_THREADS	5

void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
   // in c :
   //printf("Hello World! It's me, thread #%ld!\n", tid);
   // in c++:
   //TODO : formmattare l'output 
   std::cout << "Hello World! It's me, thread "<< tid << std::endl ;
   
   pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
   pthread_t threads[NUM_THREADS];
   int rc;
   long t;
   for(t=0;t<NUM_THREADS;t++){
    // in c :
	// printf("In main: creating thread %ld\n", t);
    // in c++:
    //TODO : formmattare l'output 
   std::cout << "In main: creating thread " << t << std::endl;
   
     rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
     if (rc){
		// in c :
		// printf("ERROR; return code from pthread_create() is %d\n", rc);
		// in c++:
		//TODO : formmattare l'output 
       std::cout << "ERROR; return code from pthread_create() is "
				 << rc<< std::endl;
       exit(-1);
       }
     }

   /* Last thing that main() should do */
   pthread_exit(NULL);
}
