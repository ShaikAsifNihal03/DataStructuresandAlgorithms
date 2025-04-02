#include<iostream>
using namespace std;

int main()
{
    int budget;
    cout <<"Enter Budget: "<<endl;
    
    //taking input
    cin>>budget;

    if(budget >2000000) //if u enter 20 lakhs then also prints else part
        {
        cout<<"I can buy scorpio"<<endl;
    }
    else
    {
        cout << " I dont have enough money" << endl;
    }

     int age ;
     cout << "Enter age:" ;

     //taking input
     cin >> age;
    if(age >= 18)
    {
        cout<< "You are eligible to vote";
    }
    else
    {
      cout << "You are not eligible to vote";
    }
    return 0;
}