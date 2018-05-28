// 001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inch;
private:
	void setvalue(int x, int i);
	void display();
	CFeet ccd(CFeet & objf);
	CFeet operator+(CFeet & opjf);
};
void CFeet::setvalue(int x, int i)
{
	feet = x + i / 12;
	inch = x % 12;
}
void CFeet::display()
{
	cout << feet << "feet" << inch << "inch" << endl;
}
CFeet CFeet::ccd(CFeet&opjf)
{
	CFeet temp;
	temp.setvalue(feet + opjf.feet, inch + opjf.inch);
	return temp;
}
CFeet CFeet::operator+(CFeet&opjf)
{
	CFeet temp;
	temp.setvalue(feet + opjf.feet, inch + opjf.inch);
	return temp;
}
int main()
{
	CFeet A, B, C;
	A.setvalue(11,7);
	B.setvalue(5.9);
	C = A + B;
	C.display();
	return 0;
}