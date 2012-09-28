#ifndef __LINKEDLISTQUEUE_H__
#define __LINKEDLISTQUEUE_H__

class LinkedListQueue {
  private:
    struct Node {int value; struct Node * next;};
    Node* front;
    Node* back;
    int num;
    int capacity;
    int* theQueue;

  public:
    void enqueue(const int &value);
    int dequeue();
    int size();
    bool isEmpty();

  const Node& n;
};
#endif
