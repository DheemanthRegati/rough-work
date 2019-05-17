def func(a):
    if a == 1:
        return 1
    else:
        return(a*func(a-1))

B = int(input("enter number"))
print(func(B))
