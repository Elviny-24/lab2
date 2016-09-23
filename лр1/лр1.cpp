// лр1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "circle.h" 

int _tmain(int argc, _TCHAR* argv[])
{int number;

	setlocale(0, ""); 
	for(;;){
		cout<<"-------------------------------Menu---------------------------------"<<endl;
		cout<<"|| 0 выход                                                        ||"<<endl;
		cout<<"|| 1 без параметров + сравнение площадей и принадлежность прямой; ||"<<endl;
		cout<<"|| 2 параметрический + копирование                                ||"<<endl;
		cout<<"|| 3 утановка полей данных через set и get                        ||"<<endl;
		cout<<"--------------------------------------------------------------------"<<endl;	
		cin>>number;
	circle a1,a2;
	if(number==1){
		cout<<a1.cc<<endl;
a1.vvodx();
a1.vvody();
cout<<endl;
a1.setrad();
cout<<"S=";
a1.ploshad();
cout<<"L=";
a1.dlina();
cout<<endl;

a2.vvodx();
a2.vvody();
cout<<endl;
a2.setrad();
cout<<"S=";
a2.ploshad();
cout<<"L=";
a2.dlina();
cout<<endl;

int s1=a1.ploshad();
int s2=a2.ploshad();
cout<<"Соотношения S1 и S2"<<endl;
if(s1>s2)
	cout<<"s1>s2"<<endl;
else
	cout<<"s1<s2"<<endl;

int px,py;
cout<<"Введите координату прямой: ";
cout<<"x= ";
cin>>px;
cout<<" y= ";
cin>>py;
cout<<endl;
int x1=a1.getX();
int y1=a1.getY();
int x2=a2.getX();
int y2=a2.getY();

if(x1==px && x2==px)
	cout<<"Окружности лежат на одной прямой"<<endl;
else if(y1==py && y2==py)
	cout<<"Окружности лежат на одной прямой"<<endl;
else cout<<"Окружности не лежат на одной прямой"<<endl;

cout<<"Information"<<endl;
cout<<"First"<<endl;
a1.print();
cout<<"Second"<<endl;
a2.print();
	}

if (number==2){
circle a1(1,4,7);
a1.ploshad();
a1.dlina();
circle a2(1,6,10);
a2.ploshad();
a2.dlina();
cout<<endl;
	cout<<"Information:"<<endl;
cout<<"First"<<endl;
a1.print();
cout<<endl;
cout<<"Second"<<endl;
a2.print();
cout<<endl;
cout<<"Создание 3-ей окружности путем копирования 1-ой"<<endl;
		circle a3(a1);
		a3.ploshad();
        a3.dlina();
    	a3.print();
}
	if(number==3){
		a1.setX(3);
		a1.setY(5);
		a1.setR(10);
		int x1=a1.getX();
		int y1=a1.getY();
		int r1=a1.getR();
		a1.ploshad();
        a1.dlina();
		a1.print();
	}
	if(number==0)
		exit(0);
	}
	return 0;
}

