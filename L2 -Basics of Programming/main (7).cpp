#include <iostream>
using namespace std;

int main() {

  int a = 10;
  int b = 5;
//arithmetic operator 
  int answer = a % b ;
  cout << answer << endl;

 //Assignment operator 
  int age =18;
  cout <<endl;

 //relational operator 
  cout << (a==b);
  cout << (a!=b);
  cout << (a<b);
  cout << (a<b);
  cout << (a>=b);
  cout << (a<=b);
  cout << endl;
 
  //logical operator 
  //logical and (&&)
   char gender = 'M';
   cout << ((age>18) && (gender == 'M'))<< endl; 

  //logical or(||)
   cout << ((age>18) || (gender == 'M'))<< endl;  
   
   //logical not
   cout << !(age>18);
  return 0;
}
