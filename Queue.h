
#ifndef queue_h
#define queue_h
#include "Node.h"
using namespace std;

class Queue {
    NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x) {
    
    NodePtr new_node = new NODE(x); 

    if(new_node) { 
        if (headPtr == NULL) {
        // if the Queqe is newly initialized head and tail will be NULL
            headPtr = new_node;
            tailPtr = new_node;
        }
        else {
            tailPtr->set_next(new_node);
            tailPtr = new_node;
        }
        size++;
    }
}

int Queue::dequeue() {
    /*
    if(size>0)
    {
        NodePtr temp = headPtr;
        int value = headPtr->get_value();
        headPtr = headPtr->get_next();
        delete temp;
        size--;

        if (size == 0)
        {
            tailPtr = NULL;
        }

        return value;
    }

  cout<<"Empty queue";
  return -1;
  */

    if (headPtr != NULL) {

        NodePtr t = headPtr; // assign temporart to headPtr
        int value = t->get_value();
        headPtr = headPtr->get_next();
        cout << "dequeing " << value << endl;
        delete t;
        size--;

        if (headPtr == NULL) tailPtr = NULL;
    
        return value;
    }

    cout << "Empty Queue " <<  endl;
    return -1;
}


Queue::Queue() {
    //initialize Queue
    headPtr = NULL;
    tailPtr = NULL;
    size = 0;
}

//delete all remaning Queue (i.e. DQ all) 
Queue::~Queue() {while(size > 0) dequeue();}

#endif
