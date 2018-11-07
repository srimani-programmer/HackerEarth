#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    string s1 = "";
    //int val;
    for(int i=0;i<s.size();i++){
        char ch = s.at(i);
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
            s1 = s1+ch;
        }else{
            if(ch >= 'a' && ch <= 'z'){
            ch = ch - 32;
            s1 = s1+ch;
            }
        }
    }

    cout<<s1<<endl;

    return 0;
}