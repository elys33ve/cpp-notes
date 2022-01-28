#include <iostream>             // header file library--allows input/output objects
#include <iomanip>              // formats things (setprecision for decimals n stuff)
using namespace std;            // allows use of names for objects and variables from the standard library

int main (){                    // main function call
  int intNum = 111;               //assign variable type (integer)
  intNum = 11;                    //changes if assigned new value (now 11)
  double floatNum = 5.555;        //float
  char letter = 'g';              //character
  string text = "asdfsad";        //string
  bool truefalse = true;          //boolean

  int age = 2000;
  cout << "im " << age << " years old\n";     //combine
  
  int x = 5;
  int y = 60;
  int sum = x + y;
  cout << sum << endl;                            //math w variables

  int s = 3, f = 6, n = 4;                //declare multi variables in one line

  const int constantInt = 50;             //constant
  
  cout << fixed << setprecision(2) << (2.0 / 3.0);      //set number of decimal places show
  
  return 0;
}
