#include <iostream>
using namespace std;

int main()
{
   
   char grade ;
   cout << "Enter your grade :" <<endl;
    
   cin>>grade ;
    /*
   if(grade == 'A')
   {
     cout << "your marks will be in the range of 90 to 100"<<endl;
   }
   else if(grade == 'B')
   {
    cout << "your marks will be in the range of 80 to 90"<<endl;
   }
   else if(grade == 'C')
   {
    cout << "your marks will be in the range of 70 to 80"<<endl;
   }
   else if(grade == 'D')
   {
    cout << "your marks will be in the range of 60 to 70"<<endl;
   }
   else 
   {
    cout << "your marks will be in the range of 0 to 60"<<endl;
   }
    */

   //switch case
   switch(grade)
   {
      case 'A':
      cout << "your marks will be in the range of 90 to 100"<<endl;
      break;
      case 'B':
      cout << "your marks will be in the range of 80 to 90"<<endl;
      break;
      case 'C':
      cout << "your marks will be in the range of 70 to 80"<<endl;
      break;
      case 'D':
      cout << "your marks will be in the range of 60 to 70"<<endl;
      break;
      default :
      cout << "your marks will be in the range of 0 to 60"<<endl;//option 
   }

   //conditions pertaining to switch case  3.No Range Checking 
  /*int age = 18;
   switch(age)
   {
    case (age>18)  //condition checking not allowed in case 
    {
        cout<< "your age is greeater than 18"<<endl;
    }
   }
    */
   int age = 18;
   switch(age>=
    18)
   {
    case 1://true for 1
    {
        cout<< "your age is greeater than 18"<<endl;
        break;
    }
    case 0://false for 0
    {
        cout<< "your age is less than 18"<<endl;
        break;
    }
   }
   

   return 0;
}