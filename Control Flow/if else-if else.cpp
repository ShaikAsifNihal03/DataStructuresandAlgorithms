#include <iostream>
using namespace std;

int main()
{
    int marks = 60;
    if (marks >90)
    {
        cout <<"A";
    }
    else if (marks >80)
    {
        cout <<"B";

    }
    else if (marks >70)
    {
        cout <<"C";
    }
    else if(marks >60)
    {
        cout << "D";
    }
    else 
    {
        cout <<"you failed";
    }
    return 0 ;
}