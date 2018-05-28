// 001.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inch;
public:
	void setvalue(int x, int i);
	void display();
	CFeet add(CFeet & obj);
	CFeet operator+(CFeet & obj);
};
void CFeet::setvalue(int x, int i)
{
	feet = x + i / 12;
	inch = i % 12;
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet&obj)
{
	CFeet temp;
	temp.setvalue(feet + obj.feet, inch + obj.inch);
	return temp;
}
CFeet CFeet::operator+(CFeet&obj)
{
	CFeet temp;
	temp.setvalue(feet + obj.feet, inch + obj.inch);
	return temp;
}
int main()
{
	CFeet a, b, c;
	a.setvalue(7, 9);
	b.setvalue(1, 1);
	c = a + b;
	c.display();
	return 0;
}