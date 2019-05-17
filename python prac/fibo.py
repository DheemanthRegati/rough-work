C = int(input("enter number"))
A, B, D = 1, 1, 0
print(A)
while  D < (C-1):
    print(B)
    A, B = B, A+B
    D += 1

