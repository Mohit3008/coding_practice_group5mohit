// to print multiplication table of a number

# include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number to print its table: ";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n <<" × " <<i <<" = " <<n*i <<endl;
    }
    return 0;
}
