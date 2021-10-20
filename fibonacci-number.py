n=eval(input("enter the no of terms you want"))
s1,s2=0,1
c=0
print("Fibonacci sequence")
while c<n:
    print(s1)
    s3=s1+s2
    s1=s2
    s2=s3
    c+=1
