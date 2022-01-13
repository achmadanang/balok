#include <iostream>
using namespace std;

int main()
{
	float r;
	float luaspermukaan;
	float volume;
	float phi = 3.14;
	float tinggi;
	
	cout<<"--- menghitung luas dan volume tabung ---"<<endl<<endl;
	cout<<"masukan angka r : ";
	cin>>r;
	cout<<"masukan angka tinggi : ";
	cin>>tinggi;
	
	volume = phi*r*r*tinggi;
	cout<<"volume"<<volume<<endl;
	
	luaspermukaan = 2*phi*r*(r+tinggi);
	cout<<"luaspermukaan "<<luaspermukaan;
}
