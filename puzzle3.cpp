/**
 * C++ puzzle program.  Try to figure out the result before running!
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *p, *q; // Both will go to stack
  p = new int; // p will point to memory (lower level) on heap for int
  q = p; // q will point to same adress as p
  *q = 8; // heap will have 8
  cout << *p << endl; // 8

  q = new int; /// q point to a new space on heap
  *q = 9;// 9 
  cout << *p << endl;//8 
  cout << *q << endl;//9

  return 0;
}
