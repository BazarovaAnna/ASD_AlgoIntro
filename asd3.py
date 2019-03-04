a,b,c,d,e,f,g,h=map(int,input().split())

if(a+h+f+c)!=(b+d+e+g):
    print("IMPOSSIBLE")
else:
    for i in range(100):
        if a>0 and b>0:
            print("AB-")
            a-=1
            b-=1
        if a>0 and d>0:
            print("AD-")
            a-=1
            d-=1
        if a>0 and e>0:
            print("AE-")
            a-=1
            e-=1
        if a>0 and g>0:
            print("FB+")
            print("FG-")
            print("AB-")
            a-=1
            g-=1

        if h>0 and e>0:
            print("HE-")
            h-=1
            e-=1
        if h>0 and d>0:
            print("HD-")
            h-=1
            d-=1
        if h>0 and g>0:
            print("HG-")
            h-=1
            g-=1
        if h>0 and b>0:
            print("FG+")
            print("HG-")
            print("FB-")
            h-=1
            b-=1

        if f>0 and b>0:
            print("FB-")
            f-=1
            b-=1
        if f>0 and g>0:
            print("FG-")
            f-=1
            g-=1
        if f>0 and e>0:
            print("FE-")
            f-=1
            e-=1
        if f>0 and d>0:
            print("HG+")
            print("HD-")
            print("FG-")
            f-=1
            d-=1

        if c>0 and b>0:
            print("CB-")
            c-=1
            b-=1
        if c>0 and d>0:
            print("CD-")
            c-=1
            d-=1
        if c>0 and g>0:
            print("CG-")
            c-=1
            g-=1
        if c>0 and e>0:
            print("HG+")
            print("EH-")
            print("CG-")
            c-=1
            e-=1
