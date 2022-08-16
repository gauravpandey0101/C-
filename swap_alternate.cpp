#include<iostream>
using namespace std;
                                            // Alternate swapping program for array 
void swap( int arr[], int size )            // funtion definitions for swap array
{
    int i=0;
    int NewSize=(size/2);                   // NewSize is the size of the array for the processing

    for (int j = 0; j < NewSize; j++)       // swap Elements of array
    {
        int temp;
        temp     =  arr[i];
        arr[i]   =  arr[i+1];
        arr[i+1] =  temp;
               i = i+2;
    }
    cout << "After Swap Elements are printed " << endl;

    for ( i = 0; i < size; i++)
    {
        cout << arr[i] << " \t";            // Print the elements of the array
    }

}

int main()
{
    int arr[10],i,size;
    cout << "Input Size : " << endl;        // Input Size of the array
    cin >> size; 
    cout << "Elements are : " << endl;      // Input Elements of the array
    for(i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    swap( arr, size );                      // calling function for swap array Elements
    return 0;
}