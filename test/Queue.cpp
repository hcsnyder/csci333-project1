#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"
#include "../src/ListQueue/ListQueue.h"
#include "../src/LinkedListQueue/LinkedListQueue.h"

TEST(AQueueTest, enqueue) {
  AQueue* queue = new AQueue();
  queue->enqueue(3);

  EXPECT_EQ(0, queue->isEmpty());
  EXPECT_EQ(1, queue->size());
  EXPECT_EQ(3, queue->dequeue());
  delete q;
}

TEST(AQueueTest, dequeue) {
  AQueue* queue = new QAueue();
  queue->enqueue(1);
  queue->enqueue(2);
  queue->enqueue(3);

  EXPECT_EQ(1, queue->dequeue());
  EXPECT_EQ(2, queue->dequeue());
  EXPECT_EQ(3, queue->dequeue());
  delete queue;
}

TEST(AQueueTest, size) {
  AQueue* queue = new AQueue();

  EXPECT_EQ(0, queue->size());

  queue->enqueue(1);
  queue->enqueue(2);

  EXPECT_EQ(2, queue->size());

  queue->dequeue();

  EXPECT_EQ(1, queue->size());
  delete queue;
}

TEST(AQueueTest, isEmpty) {
  AQueue* queue = new AQueue();

  EXPECT_EQ(1, queue->isEmpty());

  queue->enqueue(1);

  EXPECT_EQ(0, queue->isEmpty());
  delete queue;
}


TEST(ListQueueTest, enqueue) {
  ListQueue* queue = new ListQueue();
  queue->enqueue(3);

  EXPECT_EQ(0, queue->isEmpty());
  EXPECT_EQ(1, queue->size());
  EXPECT_EQ(3, queue->dequeue());
  delete queue;
}


TEST(ListQueueTest, dequeue) {
  ListQueue* queue = new ListQueue();
  queue->enqueue(1);
  queue->enqueue(2);
  queue->enqueue(3);

  EXPECT_EQ(1, queue->dequeue());
  EXPECT_EQ(2, queue->dequeue());
  EXPECT_EQ(3, queue->dequeue());
  delete queue;
}


TEST(ListQueueTest, size) {
  ListQueue* queue = new ListQueue();

  EXPECT_EQ(0, queue->size());

  queue->enqueue(1);
  queue->enqueue(2);

  EXPECT_EQ(2, queue->size());

  queue->dequeue();

  EXPECT_EQ(1, queue->size());
  delete queue;
}

TEST(ListQueueTest, isEmpty) {
  ListQueue* queue = new ListQueue();

  EXPECT_EQ(1, queue->isEmpty());

  queue->enqueue(1);

  EXPECT_EQ(0, queue->isEmpty());
  delete queue;
}


TEST(LinkedListQueueTest, enqueue) {
  LinkedListQueue* queue = LinkedListQueue();
  queue.enqueue(3);

  EXPECT_EQ(0, queue.isEmpty());
  EXPECT_EQ(1, queue.size());
  EXPECT_EQ(3, queue.dequeue());
  delete queue;
}


TEST(LinkedListQueueTest, dequeue) {
  LinkedListQueue* queue = ListQueue();
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);

  EXPECT_EQ(1, queue.dequeue());
  EXPECT_EQ(2, queue.dequeue());
  EXPECT_EQ(3, queue.dequeue());
  delete queue;
}


TEST(LinkedListQueueTest, size) {
  LinkedListQueue* queue = ListQueue();

  EXPECT_EQ(0, queue.size());

  queue.enqueue(1);
  queue.enqueue(2);

  EXPECT_EQ(2, queue.size());

  queue.dequeue();

  EXPECT_EQ(1, queue.size());
  delete queue;
}

TEST(LinkedListQueueTest, isEmpty) {
  ListQueue* queue = ListQueue();

  EXPECT_EQ(1, queue.isEmpty());

  queue.enqueue(1);

  EXPECT_EQ(0, queue.isEmpty());
  delete queue;
}
