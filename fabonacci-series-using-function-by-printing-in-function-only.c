#include<stdio.h>
int fabonacci(int totalNum)
{ int num1=0,num2=1,num3;
 printf("fabonacci series of first %d number: ",totalNum);
 printf("%d , %d , ",num1,num2);
  for(int i=1;i<=totalNum;i++)
  { num3=num1+num2;
    num1=num2;
    num2=num3;
    printf("%d , ",num3);
  }
}

int main()
{ int totalNum;
   printf("num1= ") ;
   scanf("%d",&totalNum);
   fabonacci(totalNum);
}

