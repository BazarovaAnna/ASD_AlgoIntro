t=int(input())
def f(n,k):
    #we need to have always k teams.
    # separate fighters
    m=n//k
    ost=n%k
    sum=0
    for i in range(ost):
        n-=m+1
        sum+=n*(m+1)
    for i in range(k-ost):
        n-=m
        sum+=n*m
    return sum

for i in range(t):
    n,k=map(int,input().split())
    print(f(n,k))

#2<teams<k
#n fighters, each need to have only 1 team
#if 2 fighters in dif teams, they fight
#NEED: max fights
    #1) the same algo is for t times, so maybe function that has n&k
    
