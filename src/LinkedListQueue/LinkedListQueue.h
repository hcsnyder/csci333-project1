#ifndef __LINKEDLISTQUEUE_H__
#define __LINKEDLISTQUEUE_H__

#include "Node.h"

class LinkedListQueue {
  private:
    Node* front;
    Node* back;
    int num;

  public:
    LinkedListQueue();
    ~LinkedListQueue();
    void enqueue(int value);
    int dequeue();
    int size();
    bool isEmpty();
};
#endif
