#include "equipment.h"
#include <iostream>
#include <windows.h>
using namespace std;
Tovar *Tovar::head = NULL;
int main()
{
	
	Scanner sc1("pro; ", "Black; ", 10);
	Planhet pl1("pro; ", "Lenovo; ", 1000);
	PC pc1("pro; ", "Asus; ", 5000);
	PechUstr pu1("pro; ", "A4tech; ", 500);
	sc1.add();
	pl1.add();
	pc1.add();
	pu1.add();
	Tehnika::show();
	system("pause");
}