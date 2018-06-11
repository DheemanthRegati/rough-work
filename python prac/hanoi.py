def move(num,A,B,C):
    if num == 1:
        B.append(A.pop())
        print (a1,a2,a3)
        print "abc ", (A,B,C)
    else :
        print (a1,a2,a3)
        print "abc ", (A,B,C)
        if (A==a1 and B==a3) or (A==a3 and B==a1) :
            C = a2
            print "check2"
        if (A==a2 and B==a3) or (A==a3 and B==a2) :
            C = a1
            print "check"
        if (A==a2 and B==a1) or (A==a1 and B==a2) :
            C = a3
            print "check3"
        
        move((num-1),A,C,B)
        move(1,A,B,C)
        move((num-1),C,B,A)

a1, a2, a3 = [],[],[]
s = input("enter discs")
for i in range(s):
    a1.append(i+1)
a1.reverse()
print (a1)
move(s,a1,a2,a3)
print (a1,a2,a3)