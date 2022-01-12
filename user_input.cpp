#include <iostream>             // header file library--allows input/output objects
using namespace std;            // allows use of names for objects and variables from the standard library

int main (){                    // main function call
  int x;                                  //make var name
  cout << "enter a number:  ";            //print this
  cin >> x;                               //keyboard input = variable
  cout << "the number u put is: " << x;   //combine and print back

//addition calcuator
  int z , y;
  cout << "\nenter an integer:  ";
  cin >> z;
  cout << "enter another integer:  ";
  cin >> y;
  int sum = y + z;
  cout << "the sum of " << z << " and " << y << " is " << sum;

  return 0;
}
