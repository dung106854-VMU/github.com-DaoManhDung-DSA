from collections import deque

n, m = map(int, input().split())

ke = [[] for _ in range(n + 1)]
chuaxet = [True] * (n + 1)
truoc = [0] * (n + 1)

for _ in range(m):
    x, y = map(int, input().split())
    ke[x].append(y)
    ke[y].append(x)

def BFS(v):
    queue = deque([v])
    chuaxet[v] = False

    while queue:
        u = queue.popleft()
        for x in ke[u]:
            if chuaxet[x]:
                chuaxet[x] = False
                truoc[x] = u
                queue.append(x)

tplt = 0

for i in range(1, n + 1):
    if chuaxet[i]:
        tplt += 1
        BFS(i)

print(tplt)