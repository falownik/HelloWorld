/**
 * @author Marcin Michalski
 * @date 04.03.2018
 * @name Projekt 0 "HelloWorld"
 * */
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
