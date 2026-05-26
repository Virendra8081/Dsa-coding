#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(10);

    int evenSum= 0;
    int oddSum=0;

    cout<<" enter the array elements :";

    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    for(int i=0; i<v.size(); i++){
        if(i%2==0){
            evenSum+=v[i];
        }
        else
            oddSum+=v[i];
    }

    cout<<" evenSum = "<<evenSum;
    cout<<endl;
    cout<<" oddSum = "<<oddSum;

    cout<<endl;

    cout<<" difference of evenSum and oddSum = "<<abs(evenSum-oddSum);
}
