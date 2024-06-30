// To check whether given number is ever or odd

# include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number:";
    cin>>x;
    if(x%2==0)
    {
        cout<<x<<" is even number ";
    }
    else
    {
        cout<<x<<" is odd number ";
    }
    return 0;
}
