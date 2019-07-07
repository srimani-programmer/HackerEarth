num = int(input())

def computeGCD(x, y): 
  
   while(y): 
       x, y = y, x % y 
  
   return x 
  
result = 1

for i in range(1,num-1):
    gcdValue = computeGCD(i,num)

    if(i > result and gcdValue == 1):
        result = i

print(result)