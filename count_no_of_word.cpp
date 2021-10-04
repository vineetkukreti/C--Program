// Write a C++ program to count all the words in a given string. Go to the editor
// Example:
// Sample Input: Python
// Sample Output: number of words -> 1
// Click me to see the sample solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "vineet is good boy hello";
    int c = 0;
    int n = s.length();
    for(int i = 0;i<n;i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
       
    }
    c++;
    
    cout<<"Number of words = "<<c<<endl;
    return 0;
}
