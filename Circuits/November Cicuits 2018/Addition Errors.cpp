#include<iostream>
#include<math.h>

using namespace std; 
  
unsigned long long int xSum(unsigned long long int n, unsigned long long int m) 
{ 
    // variable to store result    
    unsigned long long int res = 0; 
  
    // variable to maintain  
    // place value 
    unsigned long long int multiplier = 1; 
  
    // variable to maintain  
    // each digit sum 
   unsigned long long int bit_sum; 
  
    // Add numbers till each  
    // number become zero 
    while (n || m) { 
  
        // Add each bits 
        bit_sum = (n % 10) + (m % 10); 
          
        // Neglect carry 
        bit_sum %= 10; 
          
        // Update result 
        res = (bit_sum * multiplier) + res; 
        n /= 10; 
        m /= 10; 
          
        // Update multiplier 
        multiplier *= 10; 
    } 
    return res; 
} 
  
// Driver program 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
       unsigned long long int n,m;
       cin>>n>>m;
       unsigned long long int diff = xSum(n, m); 
       unsigned long long int sum = n + m;

        cout<<(sum-diff)<<endl;
    }
    
    return 0; 
}