// Check whether input character is vowel or consonant

#include <iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter the character: ";
    cin>>x;
    // tolower() converts uppercase character to lowercase character
    x = tolower(x);
    if(x=='a'|| x=='e' || x=='i' || x=='o' || x=='u')
    {
        cout<<x<<" is vowel ";
    }
    else
    {
        cout<<x<<" is consonant ";
    }
    return 0;
}
