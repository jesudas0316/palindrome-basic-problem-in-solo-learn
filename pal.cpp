#include <iostream>
using namespace std;

int main()
{
    int n,r,temp,sum=0;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
        
    }
    if(temp==sum)
    {
        cout<<temp<<" is a palindrome";
    }
    else
    {
        cout<<temp<<" is NOT a palindrome";
    }
    

}
