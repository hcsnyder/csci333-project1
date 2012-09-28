#ifndef __LISTQUEUE_H__
#define __LISTQUEUE_H__
#include <list>
using namespace std;

class ListQueue {
  private:
    list<int> theQueue;
  public:
    ListQueue();
    ~ListQueue();
    int dequeue();
    void enqueue(int value);
    int size();
    bool isEmpty();
};
#endif
