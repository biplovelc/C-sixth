#include<iostream>
using namespace std;

class Integer
{
	int num;
	public:
		Integer(){}
		Integer(int n){
			num = n;
		}	
		
		void display(){
			cout<<"Integer = "<<num<<endl;
		}
		
		Integer operator+(Integer a){
			Integer i;
			i.num = num+a.num;
			return i;
		}
		
		int operator-(Integer a){
			int i;
			i = num - a.num;
			return i;
		} 
		
		int operator*(Integer a){
			int i;
			i = num * a.num;
			return i;
		}
};

int main()
{
	Integer num1(9), num2(4), num3(6), num4(7), num5;
	num1.display();
	num2.display();
	num3.display();
	num4.display();
	
	cout<<endl<<"Evaluated " ;
	num5 = (num2*num1) + (num3-num4);
	num5.display();
}
