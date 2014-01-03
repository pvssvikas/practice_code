#include <stdio.h>

namespace PRACTICE {

  template <typename T> class Node {
    T data;
    Node* nextNode;
  protected:
    ~Node() {
      // clearing the linkd list this way will any time result in stack overflow??
      // how can we simulate such a case? or is it a good practice to write a for loop?
      // how about deleting the list in reverse order? by writing an interface which returns the nextNode* after deleting the actual node.
      //      if (nextNode) {
      //	delete nextNode;
      //      }
    }

  public:
    Node() {
      nextNode = NULL;
    }
    
      Node(T val) {
          nextNode = NULL;
          this->data = val;
      }

    Node* deleteNode() {
      Node* pNextNode = this->nextNode;
      delete this;
      return pNextNode;
    }

    void setData(T val) {
      this->data = val;
    }

    T getData(void) {
      return this->data;
    }

    Node* getNextNode() {
      return this->nextNode;
    }

    void setNextNode(Node* next) {
      this->nextNode = next;
    }
    
    void deleteNextNode() {

      if (this->nextNode) {
	Node* nextLink = this->nextNode->nextNode;
	delete this->nextNode;
	this->nextNode = nextLink;
      }
    }

  };
  
 template <typename  T> class SingleLinkedList {
     Node<T>* pHeadNode;
     Node<T>* pLastButOneNode;
 public:
     SingleLinkedList();
     ~SingleLinkedList();
     
     void push_back(T val);
     void push_front(T val);
     
     T pop_back();
     T pop_front();

  };
 

}
