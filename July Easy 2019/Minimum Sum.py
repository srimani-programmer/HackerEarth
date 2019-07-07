n,x = [int(x) for x in input().split(" ")]
myList = [int(x) for x in input().split(" ")]

sum = 0

for i in myList:
    val = (i/x) * x
    sum += val

print(round(sum))
