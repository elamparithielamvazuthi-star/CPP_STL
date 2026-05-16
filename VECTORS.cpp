#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);//ADDING 1 ELEMENT
    vec.push_back(2);//ADDING 2 ELEMENT
    vec.push_back(3);//ADDING 3 ELEMENT
    vec.push_back(4);//ADDING 4 ELEMENT
    vec.push_back(5);//ADDING 5 ELEMENT
    vec.push_back(6);//ADDING 6 ELEMENT
    vec.pop_back();//REMOVES THE LAST ELEMENT(6)
    //LOOP THROUGH ARRAY
    for(int val:vec){
        cout<<"Val: "<<val<<endl;
    }
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;
    cout<<"Index of [2]: "<<vec[2]<<endl;
    cout<<"First Element: "<<vec.front()<<endl;
    cout<<"Last Element: "<<vec.back()<<endl;
    return 0;
}