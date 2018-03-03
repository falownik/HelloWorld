#include <iostream>
#include "HelloWorld.h"

void HelloWorld::print(void){
  std::cout << "Hello World!" << std::endl;
  }
  
int main(void){
  HelloWorld hi;
  hi.print();
  return 0;
}
