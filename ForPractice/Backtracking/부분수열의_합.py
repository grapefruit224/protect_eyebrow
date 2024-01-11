import sys
input = sys.stdin.readline
n, s = map(int, input().split())
arr = list(map(int, input().split()))
res = 0
def backtracking(i, subsum):
    global res
    if subsum == s:
        res += 1
        return
    if i < n:
        backtracking(i+1, subsum + arr[i])
        backtracking(i-1, subsum - arr[i])

backtracking(0, 0)
print(res)