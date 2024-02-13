#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double deltaR  = min(R1.x + R1.w, R2.x + R2.w);
	double deltaL  = max(R1.x, R2.x);
	double deltaU  = min(R1.y, R2.y);
	double deltaD  = max(R1.y - R1.h, R2.y - R2.h);
	double area    = (deltaR - deltaL) * (deltaU - deltaD);
	if (area > 0){
		return (deltaR - deltaL) * (deltaU - deltaD);
	}
	else{
		return 0;
	}
}