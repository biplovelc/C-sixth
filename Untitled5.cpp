#include<iostream>
using namespace std;

class Matrix
{
	private:
		int m[2][3];
	public:
		void setAll(){
			for(int i=0; i<2; i++)
				for(int j=0; j<3; j++)
					cin>>m[i][j];
		}
		
		void getAll(){
			for(int i=0; i<2; i++)
			{
				for(int j=0; j<3; j++)
					cout<<""<<m[i][j]<<"\t";
				cout<<endl;
			}
		}
		
		Matrix operator+(Matrix m1)
		{
			Matrix m3;
			for(int i =0; i<2; i++)
				for(int j=0; j<3; j++)
					m3.m[i][j] = m[i][j] + m1.m[i][j];
			return m3;
		}
		
		Matrix operator-(Matrix m1)
		{
			Matrix m3;
			for(int i =0; i<2; i++)
				for(int j=0; j<3; j++)
					m3.m[i][j] = m[i][j] - m1.m[i][j];
			return m3;
		}
};

int main()
{
	Matrix m1, m2,m3;
	cout<<"Enter elements for first matrix:\n";
	m1.setAll();
	cout<<"Enter elements for second matrix:\n";
	m2.setAll();
	
	cout<<endl;
	cout<<"First matrix:\n";
	m1.getAll();
	cout<<"\nSecond matrix:\n";
	m2.getAll();
	
	m3 = m1 + m2;
	cout<<"\nSum:\n";
	m3.getAll();
	
	m3 = m1 - m2;
	cout<<"\nSubtraction:\n";
	m3.getAll();
	
	
}
