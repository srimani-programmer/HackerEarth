#include<iostream>

using namespace std;

int main(){
    int no;
    unsigned int fact = 1;
    cin>>no;

    for(int i=1;i<=no;i++){
        fact = fact * i;
    }

    cout<<fact<<endl;

    return 0;
}