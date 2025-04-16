#include <iostream>
using namespace std;

int main()
{
   /*1.//General (without loop)
    cout << "Aman"<<endl;
    cout << "Aman"<<endl;
    cout << "Aman"<<endl;
    cout << "Aman"<<endl;
    cout << "Aman"<<endl;
    cout << "Aman"<<endl;
    cout << "Aman"<<endl;*/

    //2 what if we want to print the name 10 times 
    //for
    for (int count = 1;count <= 10; count++)
    {
        cout << "Asif Nihal"<<endl;
    }

    //counting from 1 to 5
    for (int i = 1;i<=10;i=i+1)
    {
        cout << i<<endl;
    }
    /*//counting from 51 to 69
    for(int i = 51;i<=69;i=i+1)
    {
        cout <<i<<endl;
    }*/

    //alternate for the above 
    for(int i = 51;i<70;i=i+1)
    {
        cout <<i<<endl;
    }

    //3.break is used to exit from the entire loop(loop se bahar nikal jana)
    for(int i = 1;i <=10; i=i+1)
    {
        if (i == 5)
        {
            break;
        }
        cout <<"Iteration "<< i << endl;
     }

     //4.continue
     for(int i = 1;i <= 5;i++)
     {
        if(i == 4)
        {
            continue;
        }
        cout<<"Iteration " << i <<endl;
     }

     //while loop
     int i = 1;
     while( i<=5 )
     {
        cout << i << " ";
        i = i+1;
     }
    return 0;
   //do while loop in next class
}