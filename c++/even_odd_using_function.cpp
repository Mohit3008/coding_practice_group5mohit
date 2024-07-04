// to check even or odd out of two numbers

#include <iostream>
using namespace std;
// creating a function 
void evenodd(int num)
{
    if (num%2==0)
    {
        cout<<num <<" is even number" <<endl; 
    }
    else
    {
        cout<<num <<" is odd number" <<endl;
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    // Calling a function
    evenodd(n1);
    evenodd(n2);
    return 0;
}
