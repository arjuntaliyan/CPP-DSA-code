#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arrary[n];

    for (int i=0; i<n; i++){
        cin>>arrary[i];
    }
    for (int i=0; i<n; i++){
        cout<<arrary[i]<<" ";
    }
    return 0;

}