n=int(input())
if n==0:
    print(0)
elif n==1:
    su=int(input())
    print(max(su,0))

else:
    su=0
    ma=0
    for i in range(n):
        p=int(input())
        su+=p
        if su>ma:
            ma=su
        if su<0:
            su=0
    print(ma)

