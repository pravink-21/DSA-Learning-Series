// You are given a number N and find all the distinct factors of N.
#include<stdio.h>
int main(){
int n;
int count=0;
scanf("%d",&n);

for(int i=1;i<=n;i++){
      if(n%i==0)
        count++;
}
   printf("%d\n",count);
        
for(int i=0;i<=n;i++){
     if(i==0)
     continue;
     if(n%i==0){
        printf("%d ",i);
     }
}
return 0;
}
