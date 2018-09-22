#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size;
    vector<unsigned int> vec;
    cin>>size;
    int val;

    for(int i=0;i<size;i++){
        cin>>val;
        vec.push_back(val);
    }
  
      unsigned long long int sum = 0;

    for(int i=0;i<vec.size();i++)
        sum = sum + vec[i];

        cout<<sum<<endl;

    return 0;
}