/*
                    1 2 3 4 5 5 4 3 2 1
                    1 2 3 4 * * 4 3 2 1
                    1 2 3 * * * * 3 2 1
                    1 2 * * * * * * 2 1
                    1 * * * * * * * * 1
*/

#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cin >> n;

    while(i <= n)
    {
        int j = 1;

        //  Print the number of elements
        while(j <= (n-i+1))
        {
            cout << " " << j;
            j++;
        }

        //  Print Star
        int k=1;
        while(k <= (i-1))
        {
            cout << " " << "*" ;
            k++;
        }

        //  Print 2 number & 2 star
        int l=1;
        int p=(n-i+1);
        int q=p;
        
        while(l <= n) 
        {   
            while(q < n)
            {
                cout << " " << "*";
                q++;
            }
            cout << " " << p;
            p--;
            if(p==0)
            {
                break;
            }
            l++;
        }
        
        cout <<endl;
        i++;
    }
}