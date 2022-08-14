/*
           *
          **
         ***
        ****   
*/
#include<iostream>
using namespace std;

int main()  
{
    int i=1,n;
    cin>>n;
    while(i <= n)
    {
        int space = n-i;
        int j = 1;
        while(space != 0)
        {
            cout << " ";
            space--;
        }        
        while(j <= i)
        {
            cout << "*";
            j++;
        }
        cout<<endl;
        i++;
    }
}