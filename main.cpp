#include <iostream>
#include <cstring>
using namespace std;
#include "Queue.h"

int main(int argc , char **argv) 
{
  Queue q; // Initialize Queqe, head and tail == NULL

  int i,x; 

  for(i = 1; i < argc; i++) // i starts at first argv
  {
        if (strcmp(argv[i],"x") == 0) // if x shows up, dequeue
        {
          q.dequeue();
        }

        else
        {
          q.enqueue(atoi(argv[i]));
        }

  }
  return 0;
}
