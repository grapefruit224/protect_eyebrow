import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**8)
def backtracking(start, sub):
    if len(sub) == 6:
        print(" ".join(sub))
        return
    for i in range(start, whole_input[0]+1):
        sub.append(str(whole_input[i]))
        backtracking(i+1, sub)
        sub.pop()


while True:
    whole_input = list(map(int, input().split()))
    if whole_input[0] == 0:
        break
    backtracking(1, [])
    print()
