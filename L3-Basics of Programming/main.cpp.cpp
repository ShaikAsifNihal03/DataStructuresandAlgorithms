#include <iostream>
using namespace std;

int main() {
  //cout << "Hello world!" << endl;
  //conditionals
    
  //basic if-else
  int age = 16;
  if(age > 18)
  {
    cout << "age is greater than 18" << endl;
  
  }
  else 
  {
    cout << "age is not greater than 18"  <<endl;
  }
  
  

  //Homework --what will be the output
  if(cin >> age)
  {

  }
  if (cout << "babbar" << endl)
  {
     
  }
 
  //rules
  //>=90
  //>=80 & <=90 B grade 
  // >=70 & <=80 C grade
  //  otherwise ,fail

  int total = 80;

  if ( total >= 90)
  {
   cout << "A" << endl;
  }
  else if (total >= 80 && total <= 90)
  {
    cout << "B" << endl;
  }
  else if ( total >= 70 && total <= 80)
  {
    cout << "C" << endl ;
  }
  else 
  {
    cout << "Fail" << endl;
  }

  //rules:
  //1 --> Monday
  //2 --> tuesday 
  //3 --> wednesday
  //4 ---> thrusday
  //5 --->Friday
  //6 --> Saturday
  //7 -->Sunday'

   int index = 7;
   if ( index ==1)
   {
    cout << "Monday" <<endl;
   }
   else if ( index ==2)
   {
    cout << "Monday" <<endl;
   }
   if ( index ==3)
   {
    cout << "Monday" <<endl;
   }
   else if ( index ==4)
   {
    cout << "Monday" <<endl;
   }
   else if ( index ==5)
   {
    cout << "Monday" <<endl;
   }
   else if (index ==6)
   {
    cout << "Saturday" <<endl;
   }
   else if(index ==7)
   {
    cout << "Sunday" <<endl;
   }
   

   //Nested if example 
   int age3 = 20;
   char gender = 'M';

   if(age3 ==20)
   {
    if ( gender == 'F')
    {
      cout<< "Ap 20 sal ke mard hai " << endl;
    }
    else 
    {
      cout << "Ap 20 sal ke kanya hai" <<endl;
    }
   }

   //Ternary Operator
   int age4= 21;
    (age4 > 18) ? cout << "hello\n" : cout << "no hello";
    int value = (age4 > 18) ? 50 :100 ;
    cout << "value" << endl << value <<endl;
   
    //switch case 
    int index2 = 5;
    switch(index2)
    {
    case 1: cout << "Monday" <<endl;
    break;
    case 2: cout << "Tuesday" <<endl;
    break;
    case 3: cout << "Wednesday" <<endl;
    break;
    case 4: cout << "Thrusday" <<endl;
    break;
    case 5: cout << "Friday" <<endl;
    break;
    case 6: cout << "Saturday" <<endl;
    break;
    case 7: cout << "Sunday" <<endl;
    break;
    default : cout << "babbars day" <<endl;
    
    }
    return 0 ;
}


