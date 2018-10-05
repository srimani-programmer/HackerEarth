#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int theifpos,policespeed,theifspeed;
    cin>>theifpos>>policespeed>>theifspeed;
    float res;
    if(theifspeed > policespeed)
        cout<<"-1"<<endl;
    else{
        while(theifspeed != 0){
            res = policespeed * theifpos;
            theifspeed--;
        }

        cout<<fixed<<setprecision(6)<<res<<endl;
    }
    return 0;
}