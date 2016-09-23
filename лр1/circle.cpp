#include "StdAfx.h"
#include "circle.h"


circle::circle(void)
{
}
circle::circle(int Ox, int Oy, int Rr){
	x=Ox;
	y=Oy;
	R=Rr;


}



circle::~circle(void)
{
}

circle::circle(const circle&A){
	x=A.x;
	y=A.y;
	R=A.R;
	
	
	}
int circle::ploshad(){
	float pi=3.14;
	S=pi*R*R;
	cout<<S<<endl;
	return S;
}
int circle::vvodx(){
cout<<"¬вод данных"<<endl;
cout<<"¬ведите координаты центра"<<endl;
cout<<"x= ";
cin>>x;
return x;
}
int circle::vvody(){
cout<<"y= ";
cin>>y;
return y;}
void circle::setrad(){
cout<<"¬ведите радиус: R= ";
cin>>R;
}

void circle::dlina(){
		float pi=3.14;
L=2*pi*R;
cout<<L<<endl;

}


int circle::getX(){
return x;
}
int circle::getY(){
return y;
}

int circle::getR(){
return R;
}


void circle::print()
{
 cout << "x - " << circle::x << endl;
 cout << "y - " << circle::y << endl;
 cout<<"R - "<<circle::R<<endl;
 cout<<"S - "<<circle::S<<endl;
 cout<<"L - "<<circle::L<<endl;
}

void circle::setX(int X){
	x=X;
}
void circle::setY(int Y){
y=Y;
} 
void circle::setR(int Rad){
R=Rad;
}