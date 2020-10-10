#https://www.facebook.com/permalink.php?story_fbid=107317871142097&id=100055916535575
#Subscribed by Code House
@Hacktoberfest 2020
@C++
#include<stdio.h>

int main()
{
int i, num, sum = 0;

printf(“\nEnter a number : “);
scanf(“%d”, &num);

for(i=1; i<num; i++)
{
if(num%i == 0)
{
sum += i;
}
}

if(sum == num)
{
printf(“\n%d is a Perfect Number\n”, num);
}
else
{
printf(“\n%d is not a Perfect Number\n”, num);
}

return 0;
}
