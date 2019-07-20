#include<iostream>
using namespace std;

class NumDays
{
	int hour;
	float day;
	public:
		NumDays(){}
		NumDays(int h){
			hour = h;
			day = (float)hour/8;
		}
		
		int getHour(){
			return hour;
		}
		
		float getDays(){
			return day;
		}
		
		NumDays operator+(NumDays h){
			NumDays a;
			a.day = day + h.day;
			a.hour = 8*a.day;
			return a;
		}
		
		NumDays operator-(NumDays h){
			NumDays a;
			a.day = day - h.day;
			a.hour = 8*a.day;
			return a;
		}	
		
		float operator++(){
			float hr, d;
			hr = ++hour;
			d = hr/8;
			return d;
		}
		
		float operator--(){
			float hr, d;
			hr = --hour;
			d = hr/8;
			return d;
		}	
		
		float operator++(int){
			float hr, d;
			hr = hour++;
			d = hr/8;
			return d;
		}
		
		float operator--(int){
			float hr, d;
			hr = hour--;
			d = hr/8;
			return d;
		}
};

int main()
{
	NumDays n1(27), n2(18), n3, n4;
	
	n3 = n1+n2;
	cout<<"Days after addition = "<<n3.getDays()<<endl;
	
	n4 = n1-n2;
	cout<<"Days after subtraction = "<<n4.getDays()<<endl;
	
	cout<<"\nAfter prefix increment = "<<++n3<<endl;
	cout<<"After postfix increment = "<<n3++<<endl;
	
	cout<<"\nAfter prefix decrement = "<<--n4<<endl;
	cout<<"After postfix decrement = "<<n4--<<endl;	
	
}
