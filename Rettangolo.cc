// Creo la classe rettangolo

#include <iostream>
using namespace std;

class Rettangolo
{
public:
	double getArea(double base,double altezza)
	{
		return base * altezza;
	}
	
	double getPerimetro(double base,double altezza)
	{	
		return 2*(base*altezza);
	}

};


int main()
{

	Rettangolo r;
	cout<<r.getArea(8,4)<<endl;
	cout<<r.getPerimetro(7,5)<<endl;

	return 0;



}
