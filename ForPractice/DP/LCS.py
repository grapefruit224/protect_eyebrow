import sys
input = sys.stdin.readline
s1 = input().strip()
s2 = input().strip()
length1, length2 = len(s1), len(s2)
dp = [[0] * (length2+1) for _ in range(length1+1)]
if s1[0] == s2[0]:
    dp[1][1] = 1
for i in range(1, length1+1):
    for j in range(1, length2+1):
        if s1[i-1] == s2[j-1]:
            dp[i][j] = dp[i-1][j-1]+1
        else:
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])
print(dp[-1][-1])
