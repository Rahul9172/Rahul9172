C_L=[]
B_L=[]
F_L=[]
U=[1,2,3,4,5,6,7,8,9,10]
def getdatal():
    C=int(input("Enter the number of student Who like cricket: "))
    for i in range(C):
        C_R=int(input("Enter the roll number:"))
        C_L.append(C_R)
    print(C_L)
def getdata2():
    B=int(input("Enter the number of student Who like badminton:"))
    for i in range (B):
        B_R=int(input("Enter the roll number:"))
        B_L.append(B_R)
    print(B_L)

def getdata3():
    F=int(input("Enter the number of student Who Like football:"))
    for i in range(F):
        F_R=int(input("Enter the roll number:"))
        FL.append(F_R)
    print (F_L)
def and1():
    C_LandB_L=[]
    for i in C_L:
        for j in B_L:
            if(i==j):
                C_LandB_L.append(j)
    print("The student play both C&B:",C_LandB_L)

def orl():
    global C_LorB_L
    C_LorB_L=[]
    for i in C_L:
        C_LorB_L.append(i)
    for i in B_L:
        flag=0
        for j in C_L:
            if(i==j):
                flag=1
                break
        if flag==0:
            C_LorB_L.append(i)
    print("The student play either CorB but not both: ",C_LorB_L)
def nn1():
    T=C_LorB_L
    NCNB=[]
    for i in U:
        flag=0
        for j in T: 
            if(i==j):
                flag=1
                break
        if(flag==0):
            NCNB.append(i)
    print("The student play nither C nor B:", NCNB)
def cf1():
    C_LandF_L=[]
    for i in C_L:
        for j in F_L:
            if(i==j):
                C_LandF_L.append(j)
    F=C_LandF_L
    CFNB=[]
    for i in F:
        flag=0
        for j in B_L:
            if(i==j):
                flag=1
                break
        if(flag==0):
            CFNB.append(i)
    print("The student play C&F but not B:",CFNB)
getdatal()
getdata2()
getdata3()
and1()
orl()
nn1()
 
