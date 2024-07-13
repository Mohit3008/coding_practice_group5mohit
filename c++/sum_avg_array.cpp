// to compute sum and average of elements in array

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
    
    int sum=0,count=0;
    float avg;
    cout<<"Array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" " ;
        sum+=arr[i];
        count++;
    }
    avg=sum/count;
    cout<<"\n Sum of elements in array: " <<sum <<endl;
    cout<<"\n Average of elements in array: " <<avg <<endl;
    
    return 0;
}

/* OUTPUT
Enter the length of array: 5
Enter 5 numbers : 
2
8
9
7
5
Array elements are: 2 8 9 7 5 
 Sum of elements in array: 31

 Average of elements in array: 6
