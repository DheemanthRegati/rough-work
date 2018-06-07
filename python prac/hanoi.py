def move(num,A,B):
    if num == 1:
        B.append(A.pop())
        print (a1,a2,a3)
    else :
        C = []
        if A!=a2 and B!=a2 :
            C = a2
        if A!=a1 and B!=a1 :
            C = a1
        if A!=a3 and B!=a3:
            C = a3
        
        move((num-1),A,C)
        move(1,A,B)
        move((num-1),C,B)

a1, a2, a3 = [1,2,3],[],[]
# s = input("enter discs")
# for i in range(s):
    # a1.append(i+1)
a1.reverse()
print (a1)
move(3,a1,a2)
print (a1,a2,a3)