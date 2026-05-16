#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={10,20,30,40,50};
    vec.erase(vec.begin()+0,vec.begin()+4);
    for(int val:vec){
        cout<<val<<endl;
    }
    return 0;
}