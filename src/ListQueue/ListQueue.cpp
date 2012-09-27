#include "ListQueue.h"
#include<iostream>
#include<list>

void ListQueue::enqueue(int value) {
  public list<int> theQueue;
  if(theQueue.max_size() < 5) {
    theQueue = new list<int> (5);
  }
  assert(theQueue.max_size() >= 5);
  if(theQueue.size() = theQueue.max_size()) {
    theQueue.resize(theQueue.max_size()*2);
  }
  theQueue.push_back(value);
}

int ListQueue::dequeue() {
  assert(theQueue.size() != 0);
  int result = theQueue.front();
  theQueue.pop_front();
  if(theQueue.size() < (theQueue.max_size()/4) && (theQueue.size() > 5)) {
    theQueue.resize(theQueue.max_size()/2);
  }
  return result;
}

int ListQueue::size() {
  return theQueue.size();
}

bool ListQueue::isEmpty() {
  return theQueue.empty();
}
