#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){

    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reverse(int x,int y,vector<int>&v){

    while(x<y){

        int temp=v[x];

        v[x]=v[y];

        v[y]=temp;

        x++;
        y--;

    }

    return;
}

int main(){

    vector<int>v(7);
    int k;

    cout<<" enter the vector element :";

    for(int i=0; i<v.size();i++){
        cin>>v[i];
    }

    cout<<" enter the value of k :";
    cin>>k;
    

    for(int i=0; i<v.size(); i++){

        cout<<v[i]<<" ";
    }

    cout<<endl;

     k=k%v.size();  // if k is large then error corner point so do k=k%v.size()

    int n=v.size();

    reverse(0,n-k-1,v);

    reverse(n-k,n-1,v);

    reverse(0,n-1,v);



    display(v);

    return 0;

    }