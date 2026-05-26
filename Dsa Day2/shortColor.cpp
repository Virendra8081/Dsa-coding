#include<iostream>
using namespace std;

void shortColor(vector<int> &v){

    int noz=0;
    int noo=0;
    int notw=0;

    for(int i=0; i<v.size(); i++){
        if(v[i]==0)
            noz++;

        else if (v[i]==1)
            noo++;

        else
            notw++;
    
    }
    for(int i=0; i<v.size();i++){
        if(i<noz)
            v[i]=0;

        else if (i<(noz+noo))
            v[i]=1;
        
        else
            v[i]=2;
    }

    for( int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
}

int main(){

    vector<int>v= {2,0,2,1,1,0};

    shortColor(v);
}
