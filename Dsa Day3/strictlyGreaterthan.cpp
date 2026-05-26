#include<iostream>
using namespace std;

int main(){

    int arr[10],n;

    cout<<"enter the array elements :";

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    cout<<" enter the value of n:";
    cin>>n;

    for(int i=0; i<10; i++){

        if(arr[i]>n)
            cout<<arr[i]<<" ";
    }
return 0;


}