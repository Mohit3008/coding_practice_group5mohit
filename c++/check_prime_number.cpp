// to check whether given number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<=0)
    {
        cout<<"Number must be natural number";
    }
    else if (n==1)
    {
        cout<<"1 is neither prime nor composite";
    }
    else if (n==2)
    {
        cout<<"2 is prime number";
    }
    else
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                cout<<n <<" is a prime number";
                break;
            }
            else
            {
                cout<<n <<" is not a prime number";
                break;
            }
        }
    }
}
