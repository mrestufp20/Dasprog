#include <iostream>
using namespace std;

int main()
{
	int bulan,tahun,sisa_bulan;
	cout<<"PROGRAM KONVERSI BULAN KE TAHUN"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"inputkan banyaknya bulan : ";
	cin>>bulan;
	cout<<"-------------------------------"<<endl;
	cout<<bulan<<" bulan"<<" = "<<bulan/12<<" Tahun lewat "<<bulan%12<<" bulan"<<endl;
	return 0;
}