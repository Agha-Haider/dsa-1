#include<iostream>
using namespace std;
struct student
{
string name;
int num;
float cgp;
};
int main()
{
	student s1;
	cout<<" enter name of student "<<endl;
	cin>>s1.name;
	cout<<" enter roll num of student "<<endl;
	cin>>s1.num;
	cout<<" enter cgp of student "<<endl;
	cin>>s1.cgp;
	cout<<" Name of student is  "<<s1.name<<endl;
	cout<<" roll num of student is  "<<s1.num<<endl;
	cout<<" cgp of student is  "<<s1.cgp<<endl;
}
