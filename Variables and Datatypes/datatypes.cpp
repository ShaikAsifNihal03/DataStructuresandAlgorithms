#include <iostream>
using namespace std;

int main()
{
    // 1st program in variables and data types 
    // 1.declaration *int age;* --- no value is inserted now   when we try to print this declaration we get garbage value which is random  

    //2.variable defination  ---//variable is created and value is provided also 
    int age = 25;

    /*int age =2;* ---
      3.here int age is declared twice and which is not allowed currently */

    //print
      cout << "My age is :" << age <<endl;

    //int age = 28;  we cant declare same var twice
    
      //4.updation or manipulation
    age = 101;

    cout << "New age is :" << age << endl;
    return 0;
}