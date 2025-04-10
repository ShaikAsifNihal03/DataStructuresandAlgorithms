#include <iostream>
using namespace std;

int main()
{

    int height ;
    cout<<"Enter height in feet"<<endl;
    cin >>height;

    int weight;
    cout<< "Enter your weight :" << endl;
    cin >> weight;

    if(height >5)
    {
        if(weight >70)
        {
            cout <<"you got a good BMI" << endl;
        }
        else 
        {
            cout << "bhai kuch khate jaa height achi hai teri " <<endl; 
        }
    }
    else 
    {
        cout << "Gym karlo bhai "<<endl;
    }

    return 0;

}