// to print A.P given as 1 3 5 7 9 11 13 16 19 21,...

# include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number of A.P terms: ";
    cin>>n;
    // a is first term of A.P and d is common difference
    int a=1,d=2;
    cout<<"A.P sequence is ";
    for(i=0;i<=n;i++)
    {
        cout<<a+(i*d) <<" ";
    }
    return 0;
}
