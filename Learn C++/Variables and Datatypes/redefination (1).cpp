#include <iostream>
using namespace std;
int main()
{
    /*
    case 1: 
    int age = 12;
    int age =13;   -- here redefination not poss because the var are in same block  */
    
   //case 2 :Nested loop --
    
    {
       int age = 3;
       //int age = 23; -- if we include this redefination error 
    }
    {
       int age =7;
      // int age=90;
    }

    //case 3:Nested loop
    int age = 50;
    {
       int age = 17;
    }
    return 0;
}