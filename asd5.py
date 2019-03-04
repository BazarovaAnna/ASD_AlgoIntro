n=int(input())
x, y=map(int,input().split())
x-=1
y-=1
line=["*"]*(2**n)
matr1=list()
for i in range(2**n):
    matr1.append(line[:])
matr1[x][y]=0

def wide(size, zerox, zeroy, startx, starty):
    global num
    global matr1
    if size==2:
        num+=1
        if zerox==startx and zeroy==starty:
            matr1[startx+1][starty]=num
            matr1[startx+1][starty+1]=num
            matr1[startx][starty+1]=num
        if zerox==startx+1 and zeroy==starty:
            matr1[startx][starty]=num
            matr1[startx+1][starty+1]=num
            matr1[startx][starty+1]=num
        if zerox==startx and zeroy==starty+1:
            matr1[startx][starty]=num
            matr1[startx+1][starty+1]=num
            matr1[startx+1][starty]=num
        if zerox==startx+1 and zeroy==starty+1:
            matr1[startx][starty]=num
            matr1[startx+1][starty]=num
            matr1[startx][starty+1]=num

        return
    else:

        
        leng=size//2

        if zerox<startx+leng and zeroy<starty+leng:
            num+=1
            matr1[startx+leng][starty+leng-1]=num
            matr1[startx+leng-1][starty+leng]=num
            matr1[startx+leng][starty+leng]=num
            wide(leng,zerox,zeroy, startx, starty)
            wide(leng,startx+leng,starty+leng-1, startx+leng,starty)
            wide(leng,startx+leng-1,starty+leng,startx,starty+leng)
            wide(leng,startx+leng,starty+leng,startx+leng,starty+leng)
        elif zerox<startx+leng and zeroy>=starty+leng:
            num+=1
            matr1[startx+leng][starty+leng-1]=num
            matr1[startx+leng-1][starty+leng-1]=num
            matr1[startx+leng][starty+leng]=num
            wide(leng,zerox,zeroy,startx,starty+leng)
            wide(leng,startx+leng,starty+leng-1,startx+leng,starty)
            wide(leng,startx+leng-1,starty+leng-1, startx,starty)
            wide(leng,startx+leng,starty+leng,startx+leng,starty+leng)
        elif zerox>=startx+leng and zeroy<starty+leng:
            num+=1
            matr1[startx+leng-1][starty+leng-1]=num
            matr1[startx+leng-1][starty+leng]=num
            matr1[startx+leng][starty+leng]=num
            wide(leng,zerox,zeroy, startx+leng,starty)
            wide(leng,startx+leng-1,starty+leng-1, startx,starty)
            wide(leng,startx+leng-1,starty+leng,startx,starty+leng)
            wide(leng,startx+leng,starty+leng,startx+leng,starty+leng)
        elif zerox>=startx+leng and zeroy>=starty+leng:
            num+=1
            matr1[startx+leng][starty+leng-1]=num
            matr1[startx+leng-1][starty+leng-1]=num
            matr1[startx+leng-1][starty+leng]=num
            wide(leng,zerox,zeroy,startx+leng,starty+leng)
            wide(leng,startx+leng,starty+leng-1,startx+leng,starty)
            wide(leng,startx+leng-1,starty+leng-1, startx,starty)
            wide(leng,startx+leng-1,starty+leng,startx,starty+leng)

num=0
wide(len(matr1),x,y,0,0)
for i in range(2**n):
    for j in range(2**n):
        print(matr1[i][j],end=" ")
    print()
