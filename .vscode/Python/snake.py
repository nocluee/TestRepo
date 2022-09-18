def snake(M):
    rowlen=len(M)
    collen=len(M[0])
    N=[]
    for i in range(rowlen):
        if i%2==0:
            for j in M[i]:
                N.append(j)
        else:
            l=M[i]
            for j in range(-1,-collen-1,-1):
                N.append(l)
    return N            