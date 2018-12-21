#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long int n,k;
        cin>>n>>k;
      //  long int alicescore = 0,bobscore = 0;
        if(k == 1){
            if(n%2 == 0)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }else{
            for(int i=1;;i++){

                if(n - pow(k,i) >= 0){
                // alicescore = alicescore + pow(k,i);
                    n = n - pow(k,i);
                }else{
                    cout<<"Bob"<<endl;
                    break;
                }

                if(n - pow(k,i) >= 0){
                // bobscore = bobscore + pow(k,i);
                    n = n - pow(k,i);
                }else{
                    cout<<"Alice"<<endl;
                    break;
                }
                
            }
        }    
    }

    return 0;
}