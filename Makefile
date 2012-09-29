BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
AQ = ./src/AQueue
LQ = ./src/ListQueue
LLQ = ./src/LinkedListQueue
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
OUT = $(AQ)/AQueue.o $(LQ)/ListQueue.o $(LLQ)/LinkedListQueue.o $(LLQ)/Node.o
IMPLEMENTS = $(AQ)/AQueue.cpp $(LQ)/ListQueue.cpp $(LLQ)/LinkedListQueue.cpp $(LLQ)/Node.cpp
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(OUT) $(IMPLEMENTS)
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main $(SRC)/queue_tester.cpp $(OUT)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(OUT) $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o $(TEST)/queue_test $(TEST)/Queue.cpp $(OUT) $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

AQueue.o: $(AQ)/AQueue.h $(AQ)/AQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(AQ)/AQueue.cpp

ListQueue.o: $(LQ)/ListQueue.h $(LQ)/ListQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(LQ)/ListQueue.cpp

LinkedListQueue.o: $(LLQ)/LinkedListQueue.h $(LLQ)/LinkedListQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(LLQ)/LinkedListQueue.ccp

Node.o: $(LLQ)/Node.h $(LLQ)/Node.cpp
	$(CPP) $(CPPFLAGS) -c $(LLQ)/Node.cpp

clean:
	rm -rf $(SRC)/*.o
	rm -rf *~
	rm -f $(BUILD)/main
	rm -f $(TEST)/queue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; make clean
