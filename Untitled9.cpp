#include<iostream>
#include<string>
using namespace std;

// -std=c++11

class DayOfYear
{
	private:
		int day;
	public:				
		DayOfYear(){}
		DayOfYear(int d){
			day = d;
			if(d>365){
				cout<<"Invalid Input."<<endl;
				abort();
			}
		}
	
		string convert()           
		{
			int d;
			string month;
			
			if(day >= 1 && day <= 365)
			{
				if(day<=31){
					d =day;
					month = "January ";	
				}
	
				else if(day<=59){
					d = day-31;
					month = "February ";
				}
						
				else if(day<=90){
					d = day-59;
					month = "March ";
				}
				
				else if(day<=120){
					d = day-90; 
					month = "April ";
				}
				
				else if(day<=151){
					d = day-120;
					month = "May ";
				}
				
				else if(day<=181){
					d = day-151;
					month = "June ";
				}
				
				else if(day<=212){
					d = day-181;
					month = "July ";
				}
				
				else if(day<=243){
					d = day-212;
					month = "August ";
				}
				
				else if(day<=273){
					d = day-243;
					month = "September ";
				}
	            
				else if(day<=304){
					d = day-273;
					month = "October ";
				} 
				
				else if(day<=334){
					d = day-304;
					month = "November ";
				}
				
				else if(day<=365){
					d = day-334;
					month = "December ";
				}
			}
			
			else{
				if(day==366){
					return("January 1");
				}
				else if(day <= 0){
					return("December 31");
				}
			}
			
			
			month += to_string(d);
			return month;
		}
		void print(){
			cout<<"mm/dd = "<<convert()<<endl;
		}
		
		
		DayOfYear operator++(){
			DayOfYear d;
			d.day = ++day;
			return d;				
		}
		
		DayOfYear operator++(int){
			DayOfYear d;
			d.day = day++;
			return d;				
		}
		
		DayOfYear operator--(){
			DayOfYear d;
			d.day = --day;
			return d;				
		}
		
		DayOfYear operator--(int){
			DayOfYear d;
			d.day = day--;
			return d;				
		}				
};

int main()
{
	DayOfYear d1(364), d2(2), d3, d4;
	cout<<"Intial d1 ";d1.print();
	d3 = ++d1;
	cout<<"Prefix ++ ";d3.print();
	
	d3 = d1++;
	cout<<"Postfix ++ ";d3.print();
	cout<<"Final d1 ";d1.print();
	
	cout<<endl;
	cout<<"Intial d2 ";d2.print();
	d4 = --d2;
	cout<<"Prefix -- ";d4.print();
	
	d4 = d2--;
	cout<<"Postfix -- ";d4.print();
	cout<<"Final d2 ";d2.print();;
	
	
}
