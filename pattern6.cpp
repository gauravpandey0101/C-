/*
                        A B C D E
                        F G H I J
                        K L M N O
                        P Q R S T
                        U V W X Y
*/
#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cin >> n;
    char ch='A';
    while (i <= n)
    {
        int j=1;
        while(j<=n)
        {   
            cout <<" " << ch;
            ch = ch + 1;
            j++;
        }
        cout<<endl;
        i++;
    }
}