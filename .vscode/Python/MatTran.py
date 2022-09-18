def Transpose(M):
    rowlen=len(M)
    collen=len(M[0])
    N=([] for i in range(collen))
    for i in range(collen):
        for j in  range(rowlen):
            N[i].append(M[j][i])
    return N        
