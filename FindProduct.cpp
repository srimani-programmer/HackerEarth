#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int size;
    vector<int> vec;
    
    cin>>size;
        int val;
        for(int i=0;i<size;i++){
            cin>>val;
            vec.push_back(val);
        }
        sort(vec.begin(),vec.end());
    
   unsigned long int answer = vec[0];
    for(int i=0;i<size;i++){
        answer = (answer * vec[i]) % (1000000000 + 7);
    }

    cout<<answer<<endl;

    return 0;
}