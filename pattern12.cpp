/*
            1
          1 2 1     
        1 2 3 2 1  
      1 2 3 4 3 2 1  
*/

#include<iostream>
using namespace std;

int main()  
{
    int i=1,n;
    cin >> n;
 
    while(i <= n)
    {
        int space = n-i;
        int j = 1;
 
        while(space != 0)
        {
            cout << "  ";
            space--;
        }        
        while(j <= i)
        {
            cout <<" "<< j;
            j++;
        }
        int start = i-1;
        while(start != 0)
        {
            cout <<" "<< start;
            start--;
        }
        cout<<endl;
        i++;
    }
}