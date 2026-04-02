# https://neps.academy/br/exercise/174

def fatorial(N):
   if N == 0:
       return 1
   for i in range(N-1,0,-1):
       N *= i
   return N
  
N = int(input())
print(fatorial(N))