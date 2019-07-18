#include<iostream>
using namespace std;

class Vector
{
	private:
		int i;
		int j;
	public:
		Vector(){}
		Vector(int a, int b){
			i = a;
			j= b;
		}
		
		void display(){
		    if(j<0){
		    	cout<<""<< i <<"i - "<< -j<<"j" << "\n" ;
			}
			else{
				cout<<""<< i <<"i + "<< j<<"j" << "\n" ;
			}
		}
		
		Vector operator+(Vector c1){
			Vector c;
			c.i = i + c1.i;
			c.j = j + c1.j; 
			return c;
		}
		
		Vector operator-(Vector c1){
			Vector c;
			c.i = i - c1.i;
			c.j = j - c1.j; 
			return c;
		}		
};

int main()
{
	Vector v1(5, 6), v2(4, 8), v3;
	v1.display();
	v2.display();
	
	cout<<"\nAfter addition:\n";
	v3 = v1+v2;
	v3.display();
	
	cout<<"\nAfter subtraction:\n";
	v3 = v1-v2;
	v3.display();
}
