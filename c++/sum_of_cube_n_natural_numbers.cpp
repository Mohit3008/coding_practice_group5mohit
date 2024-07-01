// to calculate the sum of cube of first n natural numbers

# include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number of natural numbers: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum += (i*i*i);
    }
    cout<<"sum of cube of first " << n <<" natural numbers is " <<sum;
    return 0;
}
