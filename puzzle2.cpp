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
  int *x = new int;// x on stack point to a address on heap with int space
  int &y = *x;// y name to piece of memory, name to the memory
  y = 4;// it means address *x, because of the way it is declared

  cout << &x << endl; //adress on stack
  cout << x << endl;//addr on heap
  cout << *x << endl;//4

  cout << &y << endl; // this is *x so will be heap memory
  cout << y << endl;//4
  // cout << *y << endl;// error y is a non pointer, so we cant dereference it

  return 0;
}
