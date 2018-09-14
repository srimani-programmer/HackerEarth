#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int count = 0;

    for(int i=2;i<=num;i++){
        count = 0;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                count++;
                break;
            }
        }

        if(count == 0)
            cout<<i<<" ";
    }

    return 0;
}