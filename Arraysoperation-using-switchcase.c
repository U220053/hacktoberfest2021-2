#include<stdio.h>
#include<stdlib.h>
void main(){
 int a[100],n,i,pos,ele,flag;
 char ch, c='y';
  
 printf("enter size \n");
 scanf("%d",&n);
 printf("Enter elements in the Array:\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 do{
  
  printf("Press a key to perform the following operationsin the array:\n"
  "to insert press a\n"
  "to delete press b\n"
  "to replace press c\n"
  "to search press d\n"
  "to display press e\n"
  "to exit press f\n");
  printf("\n Enter your choice="); 
  scanf(" %c",&ch);
  
  switch(ch){
     
   case 'a':
    printf("enter pos in which you want to insert:\n");
       scanf("%d",&pos);
       printf("enter element to insert:\n");
       scanf("%d",&ele);
  
       for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
       a[pos-1]=ele;
    n++;
    break;
       
     case 'b':
      printf("enter position where you want to delete:\n");
          scanf("%d",&pos);
           
    if(pos>n)    
              printf("Deletion not possible.\n");
             else{
     for(i=pos-1;i<n;i++ ) 
            a[i]=a[i+1];        
           n=n-1;
    } 
      break;
      
     case 'c':  
       printf("enter pos in which you want to replace:\n");
       scanf("%d",&pos);
         printf("enter element to be replaced with:\n");
       scanf("%d",&ele);
    a[pos-1]=ele;
         break;
      
      case 'd':
          printf("enter value to be searched:\n");
            scanf("%d",&ele);
            flag=0;
      for(i=0;i<n;i++){
       
          if(ele==a[i]){
      flag=1;
      pos=i;
      break;
     }
       }
       printf("\nflag=%d\n",flag);
      if(flag>0)
     printf("element found at position:%d\n",pos+1);
      else
     printf("element not found\n");
      break;
      
     case 'e':
       printf("Display array:\n");
       for(i=0;i<n;i++){   
        printf("%d\t",a[i]);
       }
       break;
       
      case 'f':exit(0);
      
     default:
        printf("invalid choice, please enter according to the menu\n");
  }
  printf("\nDo you wish to continue? press y to continue or any key to exit\n");
  scanf(" %c",&c);
 }while(c=='y');
 
}
