#include "ListQueue.h"
#include <iostream>
#include<list>

using std::cout;
using std::endl;

int main() {
  ListQueue* queue = new ListQueue();
  queue->enqueue(1);
  queue->enqueue(2);
  queue->enqueue(3);
  queue->enqueue(4);

  cout << queue->dequeue() << endl;
  cout << queue->dequeue() << endl;
  cout << queue->dequeue() << endl;
  cout << queue->dequeue() << endl;

  delete queue;

  return 0;
}
