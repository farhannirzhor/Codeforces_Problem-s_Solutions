n = int(input())

arr = list(map(int, input().split()))

sorted_arr = sorted(arr)

# Prefix sum of original array
prefix = [0]
for num in arr:
    prefix.append(prefix[-1] + num)

# Prefix sum of sorted array
sorted_prefix = [0]
for num in sorted_arr:
    sorted_prefix.append(sorted_prefix[-1] + num)

m = int(input())

for _ in range(m):

    query_type, l, r = map(int, input().split())

    if query_type == 1:
        print(prefix[r] - prefix[l - 1])
    else:
        print(sorted_prefix[r] - sorted_prefix[l - 1])