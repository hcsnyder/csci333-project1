#include "AQueue.h"
#include <iostream>
#include <assert.h>

AQueue::AQueue(int initialSize) {
  theQueue = new int[initialSize];
  front = 0;
  back = 0;
  capacity = initialSize;
  num = 0;
}

void AQueue::enqueue(int value) {
 // if(capacity < 5) {
 //   theQueue = new int[5];
 //   front = 0;
 //   back = 0;
 //   capacity = 5;
 //   num = 0;
 // }
  assert(capacity >=5);
  if(num = capacity) {
    newQueue = new int[capacity*2];
    newFront = 0;
    newBack = 0;
    for(int i=0; i <= capacity; i--){
      int x = theQueue[front-i];
      newQueue[newBack] = x;
      if(newFront = 0) {
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
  back = (back+1) % capacity;
  theQueue[back] = value;
  num++;
  if(num = 0) {
    theQueue[front] = value;
    front++;
  }
}

int AQueue::dequeue() {
  int result = theQueue[front];
  front = (front+1) % capacity;
  num--;
  if(num < (capacity/4) && (num > 5)) {
    newQueue = new int[capacity/2];
    newFront = 0;
    newBack = 0;
    for(int i=0; i <= num; i--){
      int x = theQueue[front-i];
      newQueue[newBack] = x;
      if(newFront = 0) {
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
  if(num == 0) {
    return true;
  }
  else {
    return false;
  }
}
