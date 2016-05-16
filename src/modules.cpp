#include <linkedList.h>
#include <iostream>
#include <string>
#include <modules.h>

enum PROG_SELECTOR{
  NONE, LINKED_LIST, GRAPHS
};


FUNC_TYPE fp[] = {
  help,
  linkedLists,
  graphs
};



int whatToRun(const std::string& prog) {
  PROG_SELECTOR code = NONE;
  if ( prog == "LINKED_LIST" ) {
      code = LINKED_LIST;
  } else if ( prog == "GRAPHS") {
      code = GRAPHS;
  }
  
  return code;
}


void help() {
  std::cout << "dsTestApp <moduleName>" " is the way to see some o/p" <<std::endl;
  std::cout << "Possible Modules are as below \n";
  
  std::cout << "LINKED_LIST \n"
            << "GRAPHS \n";
}


void testSLLRandom(PRACTICE::SingleLinkedList<int>& intList);
void linkedLists() {
  PRACTICE::SingleLinkedList<int> intList;
  testSLLRandom(intList);
  return;
}

void graphs() {
    std::cout << "yet to implement\n\n";
}