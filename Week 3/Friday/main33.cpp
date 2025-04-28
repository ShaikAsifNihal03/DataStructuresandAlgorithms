#include <iostream>
using namespace std;
//case 3 : 
void printArray(int arr[], int size)
{
   for(int i = 0 ; i<size ; i++)
   {
      cout << arr[i] << ", ";
   }
}
 
int main()
{ 
    //case 3:
    int arr[5] = {1,2};
    printArray(arr,5);
}