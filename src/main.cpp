#include <iostream>
#include <string>
#include <modules.h>


extern FUNC_TYPE fp[];


int main (int argc, char* argv[]) {
  
  std::string givenProg = "";
  if (argc >= 2 ) {
    givenProg = argv[1];
  }
    
  fp[ whatToRun(givenProg) ]();
  return 0;
}
