//  take inputs from user and store them in an array

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter " <<n <<" numbers : " <<endl; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" Array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}

/* OUTPUT
Enter the length of array: 5
Enter 5 numbers : 
2
4
5
8
6
 Array elements are: 2 4 5 8 6 */
