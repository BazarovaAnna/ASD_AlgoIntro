n=int(input())
ans=2000000
mas=list(map(int,input().split()))
#if we have only 1 rock, depth=0 
def f(mas, left, right, depth):
    global ans
    if (len(mas)-1==depth):
        ans=min(ans,abs(left-right))
        return 
    else:
        f(mas, left+mas[depth], right, depth+1)
        f(mas, left, right+mas[depth], depth+1)
    
    
left=right=0
depth=0
f(mas,left,right,depth)
print(ans)
