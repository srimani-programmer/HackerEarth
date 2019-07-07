m,n,k = [int(x) for x in input().split(" ")]

count = 0
K_Count = 0

for i in range(1,m+1):
    if(n < 0):
        break
    if(i == k or (K_Count < k)):
        K_Count += 1
        for j in range(1,m):
            n = n - j
            count += 1
            if(n < 0):
                break
    else:
        n = n - i
        count += 1
    

print(count)
    
