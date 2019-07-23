#include<iostream>
#include<string>
using namespace std;

class DayOfYear
{
	private:
		int day;
		string month;
	public:				
		DayOfYear(){}
		DayOfYear(int d){
			day = d;
			month = "";
		}
	
		DayOfYear convert()           
		{
			if(day<=31 ){
				month = "January";	
			}

			else if(day<=59){
				day = day-31;
				month = "February";
			}
					
			else if(day<=90){
				day = day-59;
				month = "March";
			}
			
			else if(day<=120){
				day = day-90;
				month = "April";
			}
			
			else if(day<=151){
				day = day-120;
				month = "May";
			}
			
			else if(day<=181){
				day = day-151;
				month = "June";
			}
			
			else if(day<=212){
				day = day-181;
				month = "July";
			}
			
			else if(day<=243){
				day = day-212;
				month = "August";
			}
			
			else if(day<=273){
				day = day-243;
				month = "September";
			}
            
			else if(day<=304){
				day = day-273;
				month = "October";
			} 
			
			else if(day<=334){
				day = day-304;
				month = "November";
			}
			
			else if(day<=365){
				day = day-334;
				month = "December";
			}
			
			else if(day==366){
				day = 1;
				month = "January";
			}
			else if(day==0){
				day = 31;
				month = "December";
			}
			else{
				"";
			}
			return 0;
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
	DayOfYear d1(222), d2;
	d1.print();
	d2 = ++d1;
	d1.print();
	d2.print();
}
