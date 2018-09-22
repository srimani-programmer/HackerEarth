#include<iostream>
#include<vector>

using namespace std;

int main(){
    int length;
    int size;
    vector<int>width,height;
    cin>>length>>size;
    int val1,val2;
    for(int i=0;i<size;i++){
        cin>>val1;
        width.push_back(val1);
        cin>>val2;
        height.push_back(val2);
    }
    for(int i=0;i<size;i++){
        if(width[i] < length || height[i] < length)
            cout<<"UPLOAD ANOTHER"<<endl;
        else{
            if(width[i] == height[i])
                    cout<<"ACCEPTED"<<endl;
            else
                cout<<"CROP IT"<<endl;
        }
    }

    return 0;
}