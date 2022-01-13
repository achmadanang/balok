#include <iostream>
using namespace std;

int main()
{
	float a,volume,luas;
	cout<<"--- menghitung luas dan volume kubus ---"<<endl<<endl;
	cout<<"masukan sisi : ";
	cin>>a; 
	cout<<"-------------------"<<endl;
	volume = a*a*a;
	luas = 6*(a*a);
	
	cout<<"volume = "<<volume<<endl;
	cout<<"luas = "<<luas;
}
