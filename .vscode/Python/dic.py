def uniqueE():  
  L = [int(i) for i in input().split()]
  d={}
  for i in L:
    d[i]=0  
  for i in L:
    d[i]+=1  
  P=[]  
  for key, value in d.items():
    if value==1:
      P.append(key)
  P.sort()
  print(P)
uniqueE()  