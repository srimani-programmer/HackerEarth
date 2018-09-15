#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size,val,k;
    vector<int> vec;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>val;
        vec.push_back(val);
    }
    cin>>k;
    for(int i=0;i<size;i++){
        if(k == vec[i]){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}