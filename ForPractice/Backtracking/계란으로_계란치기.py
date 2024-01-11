import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**8)
n = int(input())
eggs = []
result = 0
for _ in range(n):
    eggs.append(list(map(int, input().split())))

def backtracking(now):
    global result
    
    if now == n:
        breakEggs = 0
        for i in range(n):
            if eggs[i][0] <= 0:
                breakEggs += 1
        result = max(result, breakEggs)
        return
    
    if eggs[now][0] <= 0:
        backtracking(now+1)
        return
    
    isAllBroken = True
    for target in range(n):
        if target == now: continue
        if eggs[target][0] > 0:
            isAllBroken = False
            break
    if isAllBroken:
        result = max(result, n - 1)
        return
    
    for target in range(n):
        if target == now: continue
        if eggs[target][0] <= 0: continue
        eggs[now][0] -= eggs[target][1]
        eggs[target][0] -= eggs[now][1]
        backtracking(now+1)
        eggs[now][0] += eggs[target][1]
        eggs[target][0] += eggs[now][1]


backtracking(0)
print(result)