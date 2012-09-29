#include "AQueue/AQueue.h"
#include "ListQueue/ListQueue.h"
#include "LinkedListQueue/LinkedListQueue.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
  int start, stop, elapsed;
  double seconds;

  start = clock();
  std::cout << "Array Queue test" << std::endl;

  AQueue* aqueue = new AQueue();
  for(int i = 0; i < 100; i++) {
    for(int j = 0; j < 100; j++) {
      aqueue->enqueue(i);
    }
    for (int j = 0; j < 100; j++) {
      aqueue->dequeue();
    }
  }
  delete aqueue;

  std::cout << "End of test" << std::endl;
  stop = clock();
  elapsed = stop - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  std::cout << "Time of test: " << seconds << " seconds " << std::endl;
  
  start = clock();
  std::cout << "STL List Queue test" << std::endl;
  ListQueue* listqueue = new ListQueue();
  for(int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      listqueue->enqueue(i);
    }
    for(int j = 0; j < 100; j++) {
      listqueue->dequeue();
    }
  }

  std::cout << "End of test" << std::endl;
  stop = clock();
  elapsed = stop - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  std::cout << "Time of test: " << seconds << " seconds " << std::endl;


  start = clock();
  std::cout << "Linked List Queue test" << std::endl;
  LinkedListQueue llqueue = LinkedListQueue();
  for(int i = 0; i < 100; i++) {
    for(int j = 0; i < 100; i++) {
      llqueue.enqueue(j);
    }
    for (int j = 0; j < 100; j++) {
      llqueue.dequeue();
    }
  }
 
  std::cout << "End of test" << std::endl;
  stop = clock();
  elapsed = stop - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  std::cout << "Time of test: " << seconds << " seconds " << std::endl;

  return 0;
}
