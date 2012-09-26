#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue {
  private:
    int* theQueue;
    int front;
    int back;
    int capacity;
    int* newQueue;
    int num;
    int newFront;
    int newBack;

  public:
    int dequeue();
    void enqueue(int value);
    int size();
    bool isEmpty();
};
#endif
