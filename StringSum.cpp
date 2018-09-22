#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int sum = 0;
    for(int i=0;i<s.size();i++){
        int weight = s.at(i) - 96;
        sum = sum + weight;
    }
        cout<<sum<<endl;
    return 0;
}