

namespace PRACTICE {

  template <typename T> class Node {
    T data;
    Node* nextNode;
  public:
    Node() {
      nextNode = NULL;
    }

    void setData(T val) {
      this->data = val;
    }

    T getData(void) {
      return this->data;
    }

    const Node* getNextNode() {
      return this->nextNode;
    }

    void setNextNode(Node* next) {
      this->nextNode = next;
    }
    
    void updateNextNode(Node* next) {
      if (this->nextNode) {
	delete this->nextNode;
      }
      
      this->nextNode = next;
    }
  };

  
 template <typename  DATA> class SingleLinkedList {
    DATA d;
  public:
    //    addNode(
  };
 

}
