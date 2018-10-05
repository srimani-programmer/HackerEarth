#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s; // DDXDDD-DD
    int count = 0;
    int val1,val2,val3;

        val1 = s.at(0) - '0';
        val2 = s.at(1) - '0';

    if((val1+val2)%2 != 0)
        count++;
    
        val1 = s.at(3) - '0';
        val2 = s.at(4) - '0';
        val3 = s.at(5) - '0';

    if(((val1+val2)%2 != 0) || ((val2+val3)%2 != 0))
        count++;

    val1 = s.at(7);
    val2 = s.at(8);

    if((val1+val2)%2 != 0)
        count++;
    
    if(s.at(2) == 'A' || s.at(2) == 'E' || s.at(2) == 'I' || s.at(2) == 'O' || s.at(2) == 'U' || s.at(2) == 'Y')
        count++;

    if(count > 0)
        cout<<"invalid"<<endl;
    else
        cout<<"valid"<<endl;

    return 0;
      
}