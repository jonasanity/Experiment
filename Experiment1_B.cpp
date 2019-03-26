#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
	double mass, density, volume;
	
	cout<<"\nCALCULATE VOLUME\n";
	cout<<"\nEnter mass(in grams): ";
	cin>>mass;
	cout<<"Enter density(in grams per cubic centimeters): ";
	cin>>density;
	
	volume= mass / density;
	std::cout << std::fixed;
	std::cout<< std::setprecision(2);
	std::cout<<"\nVolume: "<< volume;
	getch();
	return 0;
	
}
