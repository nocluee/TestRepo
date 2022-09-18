row=int(input())
for i in range(row):
    for j in range(0,i+1):
        print("*",end="")
    print("\n")    
for i in range(row,0,-1):
    for j in range(0,i-1):
        print("*",end="")
    print("\n")        