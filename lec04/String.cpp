#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<s<<endl;
	s=s+"world"; //strcat(s,"world");
	cout<<s<<endl;
	cout<<s.length()<<endl;//strlen(s);
	s.erase(s.begin());//����Գ 
	cout<<s<<endl;//������ 
	string t(s.rbegin(),s.rend());
	cout<<t<<endl;
	
	return 0;
}
