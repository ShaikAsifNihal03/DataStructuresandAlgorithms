#include <iostream>
using namespace std;
//case 1 : 
void printArray(int arr[], int size)
{
   for(int i = 0 ; i<size ; i++)
   {
      cout << arr[i] << ", ";
   }
}
 
int main()
{ 
   //case 1 : 
   int arr[10];

   printArray(arr,10); 
   return 0;
}