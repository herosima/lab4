#include "equipment.h"
#include <iostream>
using namespace std;
Tovar::Tovar()
{

}
Tovar::Tovar(char *pro, char *text, int stoim)
{
	this->proiz = new char[strlen(text) + 1];
	strcpy_s(proiz, strlen(proiz) + 1, text);
	this->name = new char[strlen(text) + 1];
	strcpy_s(name, strlen(name) + 1, text);
	cena = stoim;
	next = 0;
}

Tehnika::Tehnika()
{

}

void Tehnika::printTovar()
{
	cout << "Name proizvoditela: " << proiz << "Name tovara: " << name << " Cena: " << cena << endl;
}

void Tehnika::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Tovar * q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			}
			q->next = this;
			this->next = NULL;
		}
	}
}

void Tehnika::show()
{
	Tovar *p = head;
	while (p)
	{
		p->printTovar();
		p=p->next;
	}
}

