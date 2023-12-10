A=[]
n=int(input("Enter the number of Student present:"))
for i in range(n):
    print("Enter for student", i+1)
    p=int(input("Enter per:"))
    A.append(p)
print(A)
def sel():
    for i in range(n):
      min=i
      for j in range(i+1,n):
        if(A[min]>A[j]):
          min=j
      temp=A[i]
      A[i]=A[min]
      A[min]=temp
    print(A)
def bub():
    for i in range(n):
      for j in range(n-i-1):
        if(A[j]>A[j+1]):
          temp=A[j]
          A[j]=A[j+1]
          A[j+1]=temp
    print(A)
    for i in range(n):
      if(A[i]>=75):
        print(A[i],"\n")
print("a)BY SELECTION SORT:")
sel()
print("b)BY BUBBLE SORT:")
bub()
