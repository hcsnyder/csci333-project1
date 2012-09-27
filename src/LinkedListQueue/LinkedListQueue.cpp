#include "LinkedListQueue.h"
#include<iostream>
#include<assert.h>

void LinkedListQueue::enqueue(const int &value) {
  assert(num < capacity);
  Node * add = new Node;
  add->value = value;
  add->next = NULL;
  num++;
  if(front == NULL) {
    front = add;
  }
  else {
    back->next = add;
  }
  back = add;
}

int LinkedListQueue::dequeue() {
  assert(num >= 1);
  Node * result = new Node;
  result = front;
  if(num = 1) {
    front = NULL;
    back = NULL;
  }
  else {
    front = front->next;
  }
  num--;
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
