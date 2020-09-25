
#include <iostream>

int main() {
  int *numPtr = new int; /// this will do allocate 2 chunks of memory,1 on stack for pointer, another on heap for int

  std::cout << "*numPtr: " << *numPtr << std::endl; // this will show whatever is lying arround at that heap memory, since we hvnt stored anything
  std::cout << " numPtr: " <<  numPtr << std::endl; // address of the heap memory 
 std::cout << "&numPtr: " << &numPtr << std::endl; // address on the stack for numptr

  *numPtr = 42;///  we are storing 42 at heap
  std::cout << "*numPtr assigned 42." << std::endl;

  std::cout << "*numPtr: " << *numPtr << std::endl;/// 42
  std::cout << " numPtr: " <<  numPtr << std::endl;  // address for heap memory
  std::cout << "&numPtr: " << &numPtr << std::endl; /// stack

  return 0;
}
