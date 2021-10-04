#include<bits/stdc++.h>
using namespace std;
void swap(string *s,strin *v)
{
 string *temp = *s;
 *s = *v;
 *v = *temp;
}
int main()
{
	string s "hello";
	string v = "ciao"
	cout<<"\t\tBefore swapping :\n\n"<<endl;
	cout<<"s = "<<s<<endl;
	cout<<"v = "<<v<<endl;
	swap(s,v);
	cout<<"\t\tBefore swapping :\n\n"<<endl;
	cout<<"s = "<<s<<endl;
	cout<<"v = "<<v<<endl;
}
