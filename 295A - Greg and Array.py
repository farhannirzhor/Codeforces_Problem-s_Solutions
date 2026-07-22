n, m, k = map(int, input().split())

arr = list(map(int, input().split()))

operations = []

for _ in range(m):
    l, r, d = map(int, input().split())
    operations.append((l, r, d))

# Step 1: Count how many times each operation should be applied
operation_count = [0] * (m + 2)

for _ in range(k):
    x, y = map(int, input().split())
    operation_count[x] += 1

    if y + 1 <= m:
        operation_count[y + 1] -= 1

# Prefix sum to get the actual count of each operation
for i in range(1, m + 1):
    operation_count[i] += operation_count[i - 1]

# Step 2: Apply operations using a difference array
diff = [0] * (n + 2)

for i in range(1, m + 1):

    l, r, d = operations[i - 1]

    value = d * operation_count[i]

    diff[l] += value

    if r + 1 <= n:
        diff[r + 1] -= value

# Prefix sum of difference array
for i in range(1, n + 1):
    diff[i] += diff[i - 1]

# Build final array
for i in range(n):
    arr[i] += diff[i + 1]

print(*arr)