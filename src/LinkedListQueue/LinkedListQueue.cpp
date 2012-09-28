#include "LinkedListQueue.h"
#include "Node.h"
#include<iostream>
#include<assert.h>

LinkedListQueue::LinkedListQueue() {
  num = 0;
  front = 0;
  back = 0;
}

LinkedListQueue::~LinkedListQueue() {
  while (!isEmpty()) {
    dequeue();
  }
}

void LinkedListQueue::enqueue(int value) {
  Node* add = new Node(value);
  if(front == 0) {
    front = add;
    back = add;
  }
  else {
    back->setNext(add);
    back = add;
  }
  num++;
}

int LinkedListQueue::dequeue() {
  assert(!isEmpty());
  Node* sub = front;
  int result = sub->getValue();
  if(num = 1) {
    front = 0;
    back = 0;
  }
  num--;
  return result;
}

int LinkedListQueue::size() {
  return num;
}

bool LinkedListQueue::isEmpty() {
  if(num >= 1) {
    return false;
  }
  else {
    return true;
  }
}
