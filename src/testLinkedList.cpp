#include <iostream>
#include <linkedList.h>

using namespace std;
typedef PRACTICE::SingleLinkedList<int> SLL;

void testSLL_PushBack(SLL& intList) {
  intList.push_back(1);
  intList.push_back(2);
  intList.push_back(3);
  intList.push_back(4);
}

void testSLL_PushFront(SLL& intList) {
  intList.push_front(1);
  intList.push_front(2);
  intList.push_front(3);
  intList.push_front(4);
}

void testSLL_PopFront(SLL& intList) {
  cout << intList.pop_front() << endl;
  cout << intList.pop_front() << endl;
  cout << intList.pop_front() << endl;
  cout << intList.pop_front() << endl;
}

void testSLL_PopBack(SLL& intList) {
  cout << intList.pop_back() << endl;
  cout << intList.pop_back() << endl;
  cout << intList.pop_back() << endl;
  cout << intList.pop_back() << endl;
}

void testSLL(SLL& intList) {
  // will result in 4 3 2 1 
  testSLL_PushBack (intList);
  testSLL_PopBack (intList); 
 
  // will reuslt in 1 2 3 4
  testSLL_PushFront (intList);
  testSLL_PopBack (intList);
  
  // will not crash but display junk values
  testSLL_PopBack (intList);
  testSLL_PopFront (intList);  
}

void testSLLRandom(SLL& intList) {
  cout << " this test should result the numbers in this order 1 3 2 4 5 7 6" << endl;
  
  intList.push_back(1);
  cout << intList.pop_back() << endl;

  intList.push_back(2);
  intList.push_back(3);
  cout << intList.pop_back() << endl;
  cout << intList.pop_back() << endl;

  intList.push_front(4);
  cout << intList.pop_back() << endl;

  intList.push_back(5);
  cout << intList.pop_front() << endl;

  intList.push_front(6);
  intList.push_back(7);
  cout << intList.pop_back() << endl;
  cout << intList.pop_front() << endl;

  // will result in 1 3 2 4 5 7 6
}