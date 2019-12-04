import os
while 1:
    print("----------一元二次方程计算器----------\n---------标准格式：Ax^2+Bx+C=0--------")
    try:
        A=float(input("A="))
        B=float(input("B="))
        C=float(input("C="))
        delta=B**2-4*A*C

#显示过程 废了 待补全
        #if A>0 or A<0:a=str(A),"x"
        #else:
            #A=1
            #a="x"
        #if B>0:b="+",str(B),"x"
        #elif B==0:b="x"
        #else:b=str(B),"x"
        #if C>0:c="+",str(C)
        #elif C==0:c=""
        #else:c=str(C)
        #display=a,b,c
        #print(display)

#计算过程
        if delta>0:
            x1=(-B+delta**0.5)/(2*A)
            x2=(-B-delta**0.5)/(2*A)
            print("x1=",x1,",x2=",x2)
        elif delta==0:
            x=(-B+delta**0.5)/(2*A)
            print("x=",x)
        else:
            print("无解")
    except:
        print("输入非法字符或非一元二次方程")
    input("按回车键以继续")
    os.system("cls")