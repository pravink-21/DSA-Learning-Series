// You are given a number N. Find the sum of all numbers from 1 to N.
#include<stdio.h>
int main(){
long long int n;
scanf("%lld",&n);
long long int sum=0;
for(long long int i=1;i<=n;i++){
    sum+=i;
}
printf("%lld",sum);
return 0;
}  