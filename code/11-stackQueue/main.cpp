/**
 * Simple C++ main using a linked-memory list class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Stack.h"
#include <iostream>

int main() {
  Stack<int> stack;

  std::cout << "Pushing 42, 53, then 64 to a stack:" << std::endl; 
  stack.push(42);
  stack.push(53);
  stack.push(64);

  std::cout << "Poping two elements from the stack:" << std::endl; 
  std::cout << "stack.pop(): " << stack.pop() << std::endl;
  std::cout << "stack.pop(): " << stack.pop() << std::endl;

  std::cout << "Pushing 1, 2, then 3 to a stack:" << std::endl; 
  stack.push(1);
  stack.push(2);
  stack.push(3);

  std::cout << "Poping two elements from the stack:" << std::endl; 
  std::cout << "stack.pop(): " << stack.pop() << std::endl;
  std::cout << "stack.pop(): " << stack.pop() << std::endl;


  /*
  std::cout << "Inserting element 3 at front:" << std::endl; 
  list.insertAtFront(3);
  std::cout << "list[0]: " << list[0] << std::endl;

  std::cout << "Inserting element 30 at front:" << std::endl; 
  list.insertAtFront(30);
  std::cout << "list[0]: " << list[0] << std::endl;
  std::cout << "list[1]: " << list[1] << std::endl;

  std::cout << "Print reverse:" << std::endl; 
  list.printReverse();


  std::cout << "Inserting 42 at [0], 43 at [1], 44 at [3]:" << std::endl; 
  list.insert(42, 0);
  list.insert(43, 1);
  list.insert(44, 3);

  std::cout << "list[0]: " << list[0] << std::endl;
  std::cout << "list[1]: " << list[1] << std::endl;
  std::cout << "list[2]: " << list[2] << std::endl;
  std::cout << "list[3]: " << list[3] << std::endl;
  std::cout << "list[4]: " << list[4] << std::endl;

  std::cout << "Removing [0](data=42) then [2](data=44):" << std::endl; 
  list.remove(0);
  list.remove(2);
  std::cout << "list[0]: " << list[0] << std::endl;
  std::cout << "list[1]: " << list[1] << std::endl;
  std::cout << "list[2]: " << list[2] << std::endl;
  */
  return 0;
}