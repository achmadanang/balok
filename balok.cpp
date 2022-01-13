#include <iostream>
using namespace std;

int main()
{
	float a,b,c,luas,volume;
	cout<<"--- menghitung luas dan volume balok ---"<<endl<<endl;
	cout<<"panjang balok = ";
	cin>>a;
	cout<<"lebar balok = ";
	cin>>b;
	cout<<"tinggi balok = ";
	cin>>c;
	cout<<"--------------------"<<endl;
	volume = a*b*c;
	luas = ((a*b)+(b*c)+(c*a))*2;
	
	cout<<"volume = "<<volume<<endl;
	cout<<"luas = "<<luas;
}
