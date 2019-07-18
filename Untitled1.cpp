#include<iostream>
using namespace std;

class Counter
{
	int count;
	public:
		void setAll(int c){
			count = c;
		}
		int getCount(){
			return count;
		}
		
		int operator++(){
			int i = ++count;
			return i;
		}
		
		int operator++(int){
			int i;
			i = count++;
			return i;
		}
		
		int operator--(){
			int i =	--count;
			return i;
		}
		
		int operator--(int){
			int i = count--;
			return i;
		}
};

int main()
{
	Counter count;
	int i=0; 
	count.setAll(2);
	i = ++count;
	cout<<"Prefix ++ = "<<i<<endl;
	i = count++;
	cout<<"Postfix ++ = "<<i<<endl;
	
	count.setAll(1);
	int a=0;
	a = --count;
	cout<<"Prefix -- = "<<a<<endl;
	a = count--;
	cout<<"Postfix -- = "<<a<<endl;
}
