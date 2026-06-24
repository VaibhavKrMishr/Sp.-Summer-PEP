def find_pair(arr, x):
    seen = {}
    for i, num in enumerate(arr):
        if (x - num) in seen:
            print(seen[x - num] + 1, i + 1)
            return
        seen[num] = i
    print("IMPOSSIBLE")

n, x = map(int, input().split())
arr = list(map(int, input().split()))
if x==1:
    print("IMPOSSIBLE")
else:
    find_pair(arr, x)
