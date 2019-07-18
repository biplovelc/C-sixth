#include<iostream>
using namespace std;

class Time
{
	private:
		int hour;
		int minute;
	public:
		Time(){	}
		Time(int h, int m){
			hour = h;
			minute = m;
		}
		
		void display(){
			cout<<"Hour = "<<hour<<" & Minute = "<<minute<<".\n";
		}
		
		Time operator+(Time t1){
			Time t;
			t.hour = hour + t1.hour;
			t.minute = minute + t1.minute;
			if(t.minute > 60){
				t.hour ++;
				t.minute -=60;
			}
			return t;
		}
		
};

int main()
{
	Time T1(2, 20), T2(1, 50), T3;
	T1.display();
	T2.display();
	
	T3 = T1+T2;
	cout<<"\nAfter sum:\n";
	T3.display();
	
	
}
