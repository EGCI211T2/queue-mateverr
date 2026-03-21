#include <iostream>
#include <cstring>
#include "Queue.h"

using namespace std;

int main(int argc , char **argv) {

  Queue q; // Initialize Queue, head and tail == NULL
  int i,x; 

  for(i = 1; i < argc; i++) {
  // i starts at first user input 
    
    if (strcmp(argv[i],"x") == 0) q.dequeue();
    // if x shows up, dequeue

    else q.enqueue(atoi(argv[i]));

  }
  return 0;
}
