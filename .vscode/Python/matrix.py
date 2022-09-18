def DiagCalc(M):
    CountL=0
    CountR=0
    for i in range(len(M)):
        CountL+=M[i][i]
        CountR+=M[i][-1-i]
    print(CountL)
    print(CountR)    
n=int(input())
M=[]
for i in range(n):
    L=list(map(int,input().split()))
    M.append(L)
DiagCalc(M)    