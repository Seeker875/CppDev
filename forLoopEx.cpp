#include <iostream>
#include <vector>
int main() {
  
  // In the standard library, a std::vector is an array with automatic size.
  // Let's make a vector of ints and loop over the contents.
  // The syntax for std::vector<> is discussed further in the lecture on template types.
  
  std::vector<int> int_list;
  int_list.push_back(1);
  int_list.push_back(2);
  int_list.push_back(3);
  
  // Automatically loop over each item, one at a time:
  for (int x : int_list) {
    // This version of the loop makes a temporary copy of each
    // list item by value. Since x is a temporary copy,
    // any changes to x do not modify the actual container.
    x = 99;
  }
  
  for (int x : int_list) {
    std::cout << "This item has value: " << x << std::endl;
  }
  
  std::cout << "If that worked correctly, you never saw 99!" << std::endl;

  std::cout << "Passing by reference!" << std::endl;
  // By reference is useful with large obejects as you dont want to make copy of object to the system 
  for (int& x : int_list) {
    // This version of the loop will modify each item directly, by reference!
    x = 99;
  }
  
  for (int x : int_list) {
    std::cout << "This item has value: " << x << std::endl;
  }
  
  std::cout << "Everything was replaced with 99!" << std::endl;


  return 0;
}
