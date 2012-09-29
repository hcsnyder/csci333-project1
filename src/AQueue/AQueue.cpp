#include "AQueue.h"
#include <iostream>
#include <assert.h>

AQueue::AQueue(int initialSize) {
  theQueue = new int[initialSize];
  front = 0;
  back = 0;
  capacity = initialSize;
  firstCap = initialSize;
  num = 0;
}

AQueue::~AQueue() {
  delete[] theQueue;
}

void AQueue::enqueue(int value) {
  if(num == capacity) {
    newQueue = new int[capacity*2];
    newFront = 0;
    newBack = 0;
    for(int i=0; i <= capacity; i--){
      int x = theQueue[front-i];
      newQueue[newBack] = x;
      if(newFront == 0) {
        newQueue[newFront] = x;
        newFront++;
      }
      newBack++;
    }
    delete[] theQueue;
    capacity = capacity*2;
    theQueue = newQueue;
    front = newFront;
    back = newBack;
  }
  
  theQueue[back] = value;
  back = (back+1) % capacity;
  num++;
  if(num == 0) {
    theQueue[front] = value;
    front++;
  }
}

int AQueue::dequeue() {
  int result = theQueue[front];
  front = (front+1) % capacity;
  num--;
  if(num < (capacity/4) && (num > firstCap)) {
    newQueue = new int[capacity/2];
    newFront = 0;
    newBack = 0;
    for(int i=0; i <= num; i--){
      int x = theQueue[front-i];
      newQueue[newBack] = x;
      if(newFront == 0) {
        newQueue[newFront] = x;
        newFront++;
      }
      newBack++;
    }
    delete[] theQueue;
    capacity = capacity/2;
    theQueue = newQueue;
    front = newFront;
    back = newBack;
  }
  return result;
}

int AQueue::size() {
  return num;
}

bool AQueue::isEmpty() {
  return !num;
}
