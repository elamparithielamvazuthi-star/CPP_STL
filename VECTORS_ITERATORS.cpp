#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={10,20,30,40,50};
    

    for(int val:vec){
        cout<<val<<endl;
    }
    

    
    
    cout<<"BEGIN: "<<*(vec.begin())<<endl;
    cout<<"END: "<<*(vec.end())<<endl;
    return 0;
}