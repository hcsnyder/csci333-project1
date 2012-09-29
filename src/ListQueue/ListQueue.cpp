#include "ListQueue.h"
#include<iostream>
#include <list>
#include <assert.h>
using namespace std;

ListQueue::ListQueue() {
  theQueue = list<int>();
}

void ListQueue::enqueue(int value) {
  theQueue.push_back(value);
}

int ListQueue::dequeue() {
  assert(theQueue.size() != 0);
  int result = theQueue.front();
  theQueue.pop_front();
  return result;
}

int ListQueue::size() {
  return theQueue.size();
}

bool ListQueue::isEmpty() {
  return theQueue.empty();
}
