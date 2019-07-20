#include<iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int complex;
	public:
		Complex(){}
		Complex(int r, int c){
			real = r;
			complex= c;
		}
		
		void display(){
		    cout << real <<" + "<< complex<<"i" << "\n" ;
		}
		
		Complex operator+(Complex c1){
			Complex c;
			c.real = real * c1.real;
			c.complex = complex * c1.complex; 
			return c;
		}	
};

int main()
{
	Complex c1(4, 52), c2(30, 8), c3;
	c1.display();
	c2.display();
	
	c3 = c1+c2;
	cout<<"\nAfter multiplication:\n";
	c3.display();
}
