#include<iostream>
#include<string>
using namespace std;

//Leap year is completely neglected. When input is 1 = January 1, 31 = January 31, 32 = February 1, 365 = December 31

class DayOfYear
{
	private:
		int day;
		string month;
	public:				
		DayOfYear(){}
		DayOfYear(int d){
			if(d > 365){
				cout<< "Invalid Input "<<endl; 
				abort();								
			}
			
			day = d;
			month = "";
		}
	
		DayOfYear convert()           
		{
			DayOfYear a;
			if(day<=31 ){
				month = "January";	    // 31 days
			}

			else if(day<=59){
				a.day = day-31;
				month = "February";           // 28 days
			}
					
			else if(day<=90){
				a.day = day-59;
				month = "March";              // 31 days
			}
			
			else if(day<=120){
				a.day = day-90;
				month = "April";             // 30 days
			}
			
			else if(day<=151){
				a.day = day-120;
				month = "May";               // 31 days
			}
			
			else if(day<=181){
				a.day = day-151;
				month = "June";              // 30 days
			}
			
			else if(day<=212){
				a.day = day-181;
				month = "July";             // 31 days
			}
			
			else if(day<=243){
				a.day = day-212;
				month = "August";            // 31 days
			}
			
			else if(day<=273){
				a.day = day-243;
				month = "September";         // 31 daus
			}
            
			else if(day<=304){
				a.day = day-273;
				month = "October";           // 30 days
			} 
			
			else if(day<=334){
				a.day = day-304;
				month = "November";          // 30 days
			}
			
			else if(day<=365){
				a.day = day-334;
				month = "December";           // 31 days
			}
			
			else if(day==366){
				a.day = 1;
				month = "January";               // 366 = January 1;
			}
			else{
				a.day = 31;
				month = "December";              // 0 = December 31       not needed in this case cos, not decrement operator
			}
			
			a.month = month;
			return a;
		}
		void print(){
			convert();                          
			cout<<"mm/dd = "<<month<<" "<<day<<endl;  
		}
		
		DayOfYear operator++(){
			DayOfYear d;
			d.day = ++day;
			d.month = month;
			return d;				
		}				
};

int main()
{
	DayOfYear d1(90), d2;
	d1.print();                  // this is working as expected
	d2 = ++d1;
	d1.print();                 // this is not working properly
	d2.print();                 // this is not working properly
}
