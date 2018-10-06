#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int> vec;
    int val;
    for(int i=0;i<size;i++){
        cin>>val;
        vec.push_back(val);
    }

    sort(vec.begin(),vec.end());

    int minSum = 0;
    int maxSum = 0;

    for(int i=0;i<size-1;i++)
        minSum = minSum + vec[i];

    for(int i=size-1;i>=1;i--)
        maxSum = maxSum + vec[i];

    cout<<minSum<<" "<<maxSum<<endl;

    return 0;
}