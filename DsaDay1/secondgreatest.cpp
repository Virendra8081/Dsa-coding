#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){

    int k, max = INT_MIN, max2=INT_MIN;

    cout<<" enter the size of vector :";
    cin>>k;

    vector<int>v(k);

    cout<<" enter the vector element :";
    
    for(int i=0; i<v.size();i++){
        cin>>v[i];
    }

    for(int i=0; i<v.size();i++){
        
        if(v[i]>max)
        max = v[i]; 
    }

    for(int i=0; i<v.size();i++){
        
        if(v[i] !=max && v[i]>max2)
        max2 = v[i]; 
    }

    cout<<"max = "<<max<<endl;

    cout<<"max2 = "<<max2<<endl;


    return 0;






}