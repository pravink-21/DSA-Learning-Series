// You are given a list of N integers and a value K. 
// Print 1 if K exists in the given list of N integers, otherwise print −1.
#include<stdio.h>
#include<stdlib.h>
int main(){
int n,k,ans=-1;
scanf("%d%d",&n,&k);
int *p=(int *)malloc(sizeof(int)*n);
for(int i=0;i<n;i++){
    scanf("%d ",&p[i]);
}
// int k;
// scanf("%d",&k);
for(int i=0;i<n;i++){
    if(k==p[i]){
       ans=1;
    }
}
printf("%d",ans);
return 0;
}