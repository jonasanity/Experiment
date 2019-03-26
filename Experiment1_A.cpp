#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	double box, side, premium, gen, total;
	double boxtotal,sidetotal,premiumtotal,gentotal;
	cout<<"\nTicket Price\n\n";
	cout<<"Type \t\t\t Price \t\t\t\n";
	cout<<"Box \t\t\t 250.00 \t\t\t\n";
	cout<<"Sideline \t\t 100.00 \t\t\t\n";
	cout<<"Premium \t\t 50.00 \t\t\t\n";
	cout<<"GenAd \t\t\t 25.00 \t\t\t\n";
	
	
	cout<<"\nTICKET SALES \n\n";
	cout<<"Type \t\t\t Price     *     Number of Sales\t\n";
	cout<<"Box \t\t\t 250.00 \t\t";
	cin>>box;
	cout<<"Sideline \t\t 100.00 \t\t";
	cin>>side;

	cout<<"Premium \t\t 50.00 \t\t\t";
	cin>>premium;

	cout<<"GenAd \t\t\t 25.00 \t\t\t";
	cin>>gen;
	
	cout<<"\n\nTotal Sold\n";
	cout<<"Box(250.00*"<<box<<"): \t\t"<<250*box<<"\n";
	cout<<"Sideline(100.00*"<<side<<"): \t\t"<<100*side<<"\n";
	cout<<"Premium(50*"<<premium<<"): \t\t"<<50*premium<<"\n";
	cout<<"GenAd(25*"<<gen<<"): \t\t\t"<<25*gen<<"\n";
	

	
	total= (box*250)+(side*100)+(premium*50)+(gen*25);
	cout<<"\nGrand total: "<<total <<endl;
	getch();
return 0;	
}
