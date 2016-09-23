#pragma once
#include <iostream>
#include "string.h"

using namespace std;

class circle
{ 
 int x,y;
 int R;

float S,L;
public:
	 const static int cc='C';
	circle();
	void sravnenie(int s1,int s2);
	circle (const circle&);
	circle(int ,int ,int );	
	    int vvodx() ;
		int vvody() ;
	    int getX() ;
		int getY() ;
		int getR()	;
	    void setrad();
	    void print();
///////////////////////////////
      	void setX(int);
		void setY(int);
		void setR(int);
 int ploshad();
 void dlina();


	

	~circle(void);
};

