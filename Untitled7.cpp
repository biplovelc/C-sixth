#include<iostream>
using namespace std;

class Person
{
	int age;
	public:
		Person(){}
		Person(int a){
			age = a;
		}
		
		int getAge(){
			return age;
		}
		
		bool operator<=(Person p);
};

bool Person::operator<=(Person p)
{
	if(age<=p.age){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int a, b;
	cout<<"Enter your age: ";
	cin>>a;
	
	cout<<"Your friend's age: ";
	cin>>b;
	cout<<endl;
	
	Person p1(a), p2(b);
	
	if(p1<=p2){
		cout<<"You are younger than your friend.";
	}
	else{
		cout<<"Your friend is younger than you.";
	}
	
	
}
