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
		DayOfYear(int d, string m){
			day = d;
			month = m;
			if(d > 31 && d < 1){
				cout<<"Invalid input."<<endl;
			}
		}
		
		string check()           //To check the month 
		{
			switch(month)
			{
				case 1:
					return "January";
					break;
				case 2:
					return "February";
					break;
				case 3:
					return "March";
					break;
				case 4:
					return "April";
					break;
				case 5:
					return "May";
					break;
				case 6:
					return "June";
					break;
				case 7:
					return "July";
					break;
				case 8:
					return "August";
					break;
				case 9:
					return "September";
					break;
				case 10:
					return "October";
					break;
				case 11:
					return "November";
					break;
				case 12:
					return "December";
					break;
				default:
					cout<<"Invalid Input.";
					break;
			}
		}
		
		DayOfYear operator++(){
			DayOfYear d;
			d.day = day++;
			if(d.day>31){
				d.day = 1;
				
			}
		}
		
		 
		DayOfYear operator--(){
			int 
			d.day = --day;
			if(d<1){
				day = 31;
				--month;
			}
		}		
};
