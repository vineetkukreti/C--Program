// Write a program in C++ to find the sum of digits of a given number. Go to the editor
// Sample Output:
// Input a number: 1234
// The sum of digits of 1234 is: 10
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,sum = 0;
    cin>>n;
    int num = n;
    while(num>0)
    {
        int rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    cout<<"Sum of "<<n<<" : "<<sum;
    return 0;
}
