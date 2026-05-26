#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){

    vector<int>v(10);
    vector<int>p;

    int max1= INT_MIN;
    int max2= INT_MIN;
    int max3= INT_MIN;

    cout<<" enter the array elements :";

    for(int i=0; i<10; i++){
        cin>>v[i];
    }

    // finding max1

    for(int i=0;i<v.size(); i++){

        if(v[i]>max1){
         max1= v[i];
        }
    }
     p.push_back(max1);

    for(int i=0;i<v.size(); i++){

        if(v[i]>max2 && v[i]!=max1){
         max2= v[i];
       }
    }
      p.push_back(max2);

     for(int i=0;i<v.size(); i++){

        if(v[i]>max3 && v[i]!=max1 && v[i]!=max2){
         max3= v[i];
       }
    }
      p.push_back(max3);

    cout<<" three greatest element in the array are =";

    for(int i=0; i<p.size(); i++){
        cout<<p[i]<<" ";
    }

    return 0;



}