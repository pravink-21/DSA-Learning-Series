// You're giventwo numbers L and R. Print all odd numbers between L and R (both inclusive{dono agar aa rha hai
// toh include krna hai}) in a single line separated by space, in ascending (increasing) order.
#include<stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
for(int i=a;i<=b;i++){
    if(i%2!=0){
    printf("%d ",i);
    }
}
return 0;
}