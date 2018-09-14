#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    if(n/1000000000 < 1)
        cout<<"Illegal ISBN"<<endl;
    else{
        int i = 10;
        while(n!=0){
            sum = sum + (i * (n % 10)); 
            n = n / 10;
            i--;
        }

        if(sum % 11 == 0)
            cout<<"Legal ISBN"<<endl;
        else
            cout<<"Illegal ISBN"<<endl;
    }

    

    return 0;

}