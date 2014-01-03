#include <linkedList.h>

namespace PRACTICE {

  template <typename T> SingleLinkedList<T>::SingleLinkedList (): pLastButOneNode(NULL), 
								  pHeadNode(NULL) {
  }

  template <typename T> SingleLinkedList<T>::~SingleLinkedList() {
    while ( pHeadNode ) {
      pHeadNode = pHeadNode->deleteNode();
    }
  }
  

  template <typename T> void SingleLinkedList<T>::push_back(T val) {
    if (pLastButOneNode) {
      pLastButOneNode->getNextNode()->setNextNode( new Node<T> (val) );
      pLastButOneNode = pLastButOneNode->getNextNode();
    } else if (pHeadNode) {
      pLastButOneNode = pHeadNode;
      pHeadNode->setNextNode(new Node<T> (val) );
    } else {
      pHeadNode = new Node<T> (val);
    }
  }
  
  template <typename T> void SingleLinkedList<T>::push_front(T val) {
    Node<T>* pNewNode = new Node<T> (val);
    do {
      if (pHeadNode == NULL) {
	pHeadNode = pNewNode;
	break;
      } else if (pLastButOneNode == NULL) {
	pLastButOneNode = pNewNode;
      }

      pNewNode->setNextNode ( pHeadNode );
      pHeadNode =  pNewNode;
    } while (false);
  }

  template <typename T> T SingleLinkedList<T>::pop_front() {
    T retVal;

    if (pHeadNode) {
      if (pLastButOneNode == pHeadNode) {
	pLastButOneNode = NULL;
      }
      
      retVal = pHeadNode->getData();
      pHeadNode = pHeadNode->deleteNode();
    }

    return retVal;
  }

  template <typename T> T SingleLinkedList<T>::pop_back() {
    T retVal;

    do {

      if (pHeadNode == NULL) {
	// Nothing to pop
	break;
      }

      if (pLastButOneNode == NULL && pHeadNode != NULL) {
	retVal = pHeadNode->getData();
	pHeadNode = pHeadNode->deleteNode();
      } else if (pLastButOneNode == pHeadNode) {
	retVal = pLastButOneNode->getNextNode()->getData();
	pLastButOneNode->deleteNextNode();
	
	pLastButOneNode = NULL;
      } else {
	Node<T>* ptemp = pHeadNode;
	
	retVal = pLastButOneNode->getNextNode()->getData();
	pLastButOneNode->deleteNextNode();
	
	while (ptemp->getNextNode() != pLastButOneNode)
	  ptemp = ptemp->getNextNode();
	
	pLastButOneNode = ptemp;
      }
    } while (false);
    return retVal;
  }

  // perform required explicit instantiations of the class;
  template class Node<int>;
  template class SingleLinkedList<int>;
}
