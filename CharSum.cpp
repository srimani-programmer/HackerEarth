#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int sum = 0;
    for(int i=0;i<s.size();i++){
        char ch = s.at(i) - 96;
        int val = (int)ch;
        sum = sum + val;
    }

    cout<<sum<<endl;

    return 0;
}