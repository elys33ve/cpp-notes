#include <iostream>             
#include <string>           //include to use strings
using namespace std;                     //btw this can be replaced by 'std::' for string & cout objects
                                                //but no thanks

int main (){                  
  string thisString = "hi";      //declare string variable --> ('' or "")
  string thisString2 = "yall";
  cout << thisString + ' ' + thisString2;                     //this was inefficient w those var names
  string hiyall = thisString.append(thisString2);     //another way to add them
  cout << hiyall;
  cout << hiyall.length();      //number of characters in string (size() works too)
  
  //swapping characters in string is like swaping list item in python 
  // (actually strings here are kinda like python lists)
  
  return 0;
}
