#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>v(10);

    cout<<" enter the array elements :";

    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            cout<<" unique value = "<<v[i-1];

            break;
        }
    }

    return 0;
}