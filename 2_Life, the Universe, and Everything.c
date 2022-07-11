// Your program is to use the brute-force approach in order to find the Answer to Life,he Universe, and Everything. More precisely…
// rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.
#include<stdio.h>
int main(){
int a;
while(a!=42)
{

scanf("%d",&a);
if(a!=42)
printf("%d\n",a);

}
return 0;
}