#import math 
  
def xSum(n, m) : 
  
    # variable to  
    # store result  
    res = 0
  
    # variable to maintain  
    # place value 
    multiplier = 1
  
    # variable to maintain  
    # each digit sum 
    bit_sum = 0
  
    # Add numbers till each  
    # number become zero 
    while (n or m) : 
  
        # Add each bits 
        bit_sum = ((n % 10) + 
                   (m % 10)) 
          
        # Neglect carry 
        bit_sum = bit_sum % 10
          
        # Update result 
        res = (bit_sum *
               multiplier) + res 
        n = (n // 10) 
        m = (m // 10) 
          
        # Update multiplier 
        multiplier = multiplier * 10
      
    return res 
  
# Driver code 

t = int(input())

while t != 0:
    a = int(input())
    b = int(input())
    diff = xSum(a,b)
    print(abs((a+b) - diff))
    t = t-1