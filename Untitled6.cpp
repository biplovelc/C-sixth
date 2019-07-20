#include<iostream>
using namespace std;

class String
{
	int st;
	public:
		String(){}
		String(int s){
			st = s;
		}
		
		int getS(){
			return st;
		}
		
		String operator+(String s1){
			String s;
			s.st = st+s1.st;
			return s;
		}
		
		String operator +=(String s1){
			st+=s1.st;
			return st;
		}	
};

int main()
{
	String s1(5), s2(2), s3;
	cout<<"S1 = "<<s1.getS()<<endl;
	cout<<"S2 = "<<s2.getS()<<endl;
	
	s3=s1+s2;
	cout<<"S3 = "<<s3.getS()<<endl;
	
	s3+=s2;
	cout<<"S3 = "<<s3.getS();
	
	
}
