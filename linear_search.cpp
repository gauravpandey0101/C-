#include<iostream>
using namespace std;

void search(int arr[], int s, int n)
{
    int found =0,i;
    for( i=0; i<s; i++)
    {
        if(arr[i] == n)
        {
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        cout << "Element not found : %d" << n << endl;
    }
    else
    {
        cout << "Search Element found  " << i << " location :   "<< arr[i] << endl;
    }
}

int main()
{
    int arr[10],s,i,n;
    cout << "Input Array size: " << endl;
    cin >> s;
    cout << endl << "Search Array Element " << endl;
    cin >> n;

    for(i=0;i<s;i++)
    {
        cin >> arr[i];
    }
    search(arr, s, n);
    return 0;
}