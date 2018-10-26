#include<iostream>

using namespace std;

int main(){
    int P,S,T,H,x;
    cin>>P>>S>>T>>H>>x;
    unsigned int cost = 0;

    while(x--){
        if(S <= T){
            cost += H;
        }else{
            cost += P;
        }

        S--;
    }

    cout<<cost<<endl;

    return 0;

}