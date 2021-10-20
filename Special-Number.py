l,u=eval(input("enter two nos"))
for i in range(l,u+1):
    temp=i
    sum=0
    while(temp>0):
        r=temp%10
        fact=1
        for j in range(2,r+1):
            fact=fact*j
        sum=sum+fact
        temp=temp//10
    if(sum==i):
        print("Special Number",i)
