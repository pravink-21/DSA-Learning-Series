// You are given a list of N integers and you need to reverse it and print the reversed list in a new line.
// list means array or ll
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
scanf("%d",&a);
int *p=(int *)malloc(sizeof(int)*a);
printf("\n\nEnter Input\n");
for(int i=0;i<a;i++){
    scanf("%d",&p[i]);
}
for(int i=a-1;i>=0;i--){
    printf("%d ",p[i]);
}
return 0;
}