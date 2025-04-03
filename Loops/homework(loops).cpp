#include <iostream>
using namespace std;

int main()
{
    //Homework Solutions

    //1.  1 to 100 counting 

    for(int i = 1; i <= 100 ; i= i+1)
    {
        cout << i << " ";
        cout <<endl;
    }  
    
    //2. 100 to 1 counting 
    cout << "1 to 100" <<endl;

    for(int i = 100; i >= 1 ; i = i-1)
    {
         
         cout << i << " ";
    }

    //3. Name --50times
    cout<<"printing name 50 times" <<endl;
    int i = 1;
    while (i  <= 50)
    {
        cout << "Asif Nihal" << endl;
        i = i+1 ;
    }
    
    //4.0 to -10  print 
    cout << "printing 0 to -10"<<endl;
    int count = 0;
    while ( count  >= -10)
    {
       cout << count << " ";
       count  = count-1;
    }
     cout << endl;
    //5.7th table
    for(int i = 7; i <= 70; i= i+7)
    {
        cout << i << " ";
        cout <<endl;
    }  
     
    cout<<endl;
    cout<<"All capital letters" << endl;
    for (char ch = 'A' ; ch <= 'Z'; ch++)
    {
        cout << ch << " ";
    }

    cout<<endl;
    cout<<"All small letters"  << endl;
    for (char ch = 'a' ; ch <= 'z'; ch= ch+1)
    {
        cout << ch << " ";
    }
}