// Arrary is sorted is not

#include<iostream>
using namespace std;

bool sorted (int arr[], int n)
{
    if (n==1)
    {
        return true;
    }
    bool restarrary = sorted(arr+1, n-1);
    return (arr[0] < arr[1] && restarrary);
}

int main()
{
    int arr[] = {1,2,4,5,7};
    cout<<sorted(arr,5)<<endl;
    return 0;
}