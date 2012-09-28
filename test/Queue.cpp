#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"
#include "../src/ListQueue/ListQueue.h"
#include "../src/LinkedListQueue/LinkedListQueue.h"
#include "../src/TimingTest/TimingTests.h"

TEST(Queue, enqueue) {
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);
  queue.enqueue(5);
  queue.enqueue(6);
  queue.enqueue(7);
  EXPECT_EQ(7, queue.size());
}

int main() {
  AQueue* arrayQueue = new AQueue(5);
  ListQueue* listQueue = new ListQueue(5);
  
