//find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n
// Sample Output:
// Input the value for nth term: 5
// 1/1^1 = 1
// 1/2^2 = 0.25
// 1/3^3 = 0.037037
// 1/4^4 = 0.00390625
// 1/5^5 = 0.00032
// The sum of the above series is: 1.29126
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n;
    double sum = 0,s;
    cin>>n;
    while(i<=n)
    {
        s = 1/pow(i,i);
        sum = sum+s;
        printf("1/%d^%d = %lf\n",i,i,s);
        i++;
    }
    cout<<"Sum of  : "<<sum;
    return 0;
}
