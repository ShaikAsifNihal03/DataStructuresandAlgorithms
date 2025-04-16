#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your name: ";
    //getline(cin,name);//getline is used to skip the name
       

    cout <<  ", Age: " << age << "Name: " << name << endl;
    return 0;
}
