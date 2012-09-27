#ifndef __LISTQUEUE_H__
#define __LISTQUEUE_H__

class ListQueue {
  public:
    int dequeue();
    void enqueue(int value);
    int size();
    bool isEmpty();
};
#endif
