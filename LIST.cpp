#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    l.push_front(10);
    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<"VAL: "<<val<<endl;
    }
    return 0;
}