#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec1={80,93,93,91,94};//VALUES INSIDE CURLY BRACES
    vector<int>vec2(8,90);//PRINTING 90 IN 8 TIMES
    vector<int>vec3(vec1);//VECTOR-3 VALUES WILL BE STORED IN VECTOR-1
    for(int val:vec1){
        cout<<"VECTOR-1: "<<val<<endl;
    }

    for(int val:vec2){
        cout<<"VECTOR-2: "<<val<<endl;
    }

    for(int val:vec3){
        cout<<"VECTOR-3: "<<val<<endl;
    }
    return 0;
}