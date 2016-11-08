#include"iostream"
#include"conio.h"

using namespace std;
int main()
{
	
	char c,d; 
	float a,b,e;
	cout<<"nama           :";
	cin>>c;
	
	cout<<"lulusan : ";
	cin>>d;
	
	cout<<"jenis kelamin"<<endl;
	cout<<"1. laki - laki "<<endl;
	cout<<"2. perempuan "<<endl;
	cout<<"masukan pilihan : "; cin>>a;
	cout<<"berapa ipk anda : "; cin>>b;
	cout<<"lama kuliah : "; cin >>e;
	if(a==1)
	{
		if(b>3)
		{
			if (e<=4.5)
			cout<<"good";
			
		}
		else if((b>= 2.75) && (b<3) )
		{
			if (e<=4.5)
			cout<<"lulus";
			else if (e>4.5)
			cout<<"tidak lulus";
		}
		
	}
	else if (a==2)
	{
		if(b>=3)
		{
			if(e<=4.5)
			cout<<"good";
			
		}
		else if (b>=2.75) && (b<3)
		{
			if (e<=4.5)
			cout<<"lulus";
			else if (e>4.5)
			cout<<"tidak lulus";
			 
		}
		
		
	}
	getch();
}
