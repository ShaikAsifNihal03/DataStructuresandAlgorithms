#include <iostream>
using namespace std;
//case 4 : 
void printArray(int arr[], int size)
{
   for(int i = 0 ; i<size ; i++)
   {
      cout << arr[i] << ", ";
   }
}
 
int main()
{ 
    //case 4:
    int arr[5] = {0};
    printArray(arr,5);

    cout << "\nfor case 5" << endl;
    //case 5 :
    int brr[5] = {1};
    printArray(brr,5);
     

    cout <<"\nfor case 6" << endl;
    //case 6: size nai diya hai array me 
    int crr[] ={10,20,30};
    printArray(crr,3);
}