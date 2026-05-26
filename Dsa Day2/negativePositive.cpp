#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Move all the negative number at the beginning and positive at the end

    vector<int>v= { 1,2,4,-2,-8,9, 5 ,-5,-8};

    int i=0;
    int n= v.size();

    while(i<n){

        if(v[i]<0)
        i++;

        if(v[n]>0)
        n--;

        if(v[i]>0 && v[n]<0)
        swap(v[i],v[n]);

        i++;
        n--;
    
    }

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}