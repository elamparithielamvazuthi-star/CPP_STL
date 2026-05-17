#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(10);
    vec.push_back(200);
    vec.push_back(300);
    vec.push_back(400);
    vec.push_back(500);
    vec.insert(vec.begin()+0,100);
    for(int val:vec){
        cout<<"VAL: "<<val<<endl;
    }
    return 0;
}