a = [[1, 3, 2], [4, 6, 5]]
print(a)
b,c =0,0
s = a[0][0]
for i in range(len(a)):
    for j in range(len(a[i])):
        if (a[i][j]>s):
            s=a[i][j]
            b,c=i,j
        print(s,b,c)