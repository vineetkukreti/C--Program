// Write a C++ program to count all the vowels in a given string. Go to the editor
// Example:
// Sample Input: eagerer
// Sample output: number of vowels -> 4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aeagerer";
    int c = 0;
    int n = s.length();
    for(int i = 0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
            printf("%c is the %d vowel in given string\n",s[i],c);
        }
    }
    cout<<"Number of vowels = "<<c<<endl;
    return 0;
}

