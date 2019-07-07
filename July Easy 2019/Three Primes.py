from itertools import permutations
n = int(input())

def isPrime(n):
    
    for i in range(2,n):
        if(n%i == 0):
            return False
    else:
        return n
primes_list = list()

# Generating the Prime numbers list

count = 0

for i in range(2,n+1):
    if(isPrime(i) != 0):
        primes_list.append(i)
        if((i**3) % (i*3) == 0):
            count += 1

if(len(primes_list) >= 3):
    for i in range(0, len(primes_list)-2):
        temp_list = list()
        temp_list.append(primes_list[i])
        for j in range(i+1,len(primes_list)):
            if(len(temp_list) < 3):
                temp_list.append(primes_list[j])
            else:
                break
        if((temp_list[0] * temp_list[1] * temp_list[2])%(temp_list[0] + temp_list[1] + temp_list[2]) == 0):
            perm = permutations(temp_list)
            count += len(list(perm))

        temp_list.clear()

print(count)
        
            
        
        
        
        
