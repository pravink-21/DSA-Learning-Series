// You're given a number N. If N is divisible by 5 or 11 but not both then print "ONE"(without quotes). 
// If N is divisible by both 5 and 11 then print "BOTH"(without quotes).If N is not divisible by 5 or 11 
// then print "NONE"(without quotes).
#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a%5==0 && a%11==0){
printf("BOTH");
}
else if((a%5==0 || a%11==0 )&& a% (5*11)!=0){
printf("ONE");
}
else{
    printf("NONE");
}
return 0;
}