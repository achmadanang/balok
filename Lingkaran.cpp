#include <iostream>
using namespace std;

int main()
{
	float jari2,luas,keliling,phi=3.14;
	
	cout<<"--- menghitung luas dan keliling lingkaran ---"<<endl<<endl;
	cout<<"masukan nilai jari-jari : ";
	cin>>jari2;
	
	luas = phi*jari2*jari2;
	keliling = 2*phi*jari2;
	cout<<"---------------------"<<endl;
	
	cout<<"luas : "<<luas<<endl;
	cout<<"keliling : "<<keliling;
}
