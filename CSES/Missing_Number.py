num = int(input())
arr = set(map(int, input().split()))
for i in range(1,num+1):
    if i not in arr:
        print(i)