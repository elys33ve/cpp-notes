#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string s = "why tf are there 500 tasks";
   char v = 'a';
   int x;

   ////////
   cout << s.at(4);         //character in string
   s.at(4) = 'T';           //change character
   cout << s.length();      //length of str
   cout << s.size();        //length
   //
   isalpha('x');
   isdigit('x');
   isspace(' ');
   //
   v = toupper(v);
   cout << v << endl;
   v = tolower(v);
   //
   //find()
   //substr()
   //
   cout << s.replace(7, 19,"aaaaaaa");
   //insert()
   //push_back()
   


   return 0;
}
