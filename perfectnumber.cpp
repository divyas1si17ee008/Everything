#https://www.facebook.com/permalink.php?story_fbid=107317871142097&id=100055916535575
#Subscribed by Code House
@Hacktoberfest 2020
@C++
#include <iostream>
using namespace std;

int main()
{
int i, num, sum = 0;

cout << “\nEnter a number : “;
cin >> num;

for(i=1; i<num; i++)
{
if(num%i == 0)
{
sum += i;
}
}

if(sum == num)
{
cout << “\n” << num << ” is a Perfect Number\n”;
}
else
{
cout << “\n” << num << ” is not a Perfect Number\n”;
}

return 0;
}

