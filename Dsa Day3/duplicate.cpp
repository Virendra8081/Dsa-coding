#include<iostream>
using namespace std;

int main(){

    int arr[10];

    cout<<" enter the array element :";

    for( int i=0; i<10; i++){
     cin>>arr[i];
    }

    // to check the duplicate 

    bool found = false;

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]==arr[j]){
                cout<<" array contain duplicate number :";
                found= true;
                break;}
        }
        if(found)
            break;
    }
    if(!found)
        cout<<" no duplicate element :";
    

    return 0;
}