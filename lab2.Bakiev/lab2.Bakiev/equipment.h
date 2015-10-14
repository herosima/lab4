#pragma once
#include <iostream>
//aбстрактный класс- Tovar
class Tovar{
protected: 
	static Tovar *head;
	char *name;
	int cena;
	char *proiz;
public:
	Tovar();
	Tovar(char* proiz, char* name, int cena);
	Tovar *next;
	virtual void printTovar() = 0;
	virtual void add() = 0;
};

//производный класс- Tehnika
class Tehnika:public Tovar {
public:
	Tehnika();
	Tehnika::Tehnika(char* proiz, char* name, int cena) :Tovar(proiz, name, cena){};
	void printTovar();
	static void show();
	virtual void add();
};

class Scanner :public Tehnika {
public:
	Scanner(char* pro, char* name, int cena) :Tehnika(pro, name, cena){};

};

class PC :public Tehnika{
public:
	PC(char* pro, char* name, int cena) :Tehnika(pro, name, cena){};
};

class Planhet :public Tehnika{
public:
	Planhet(char* pro, char* name, int cena) :Tehnika(pro, name, cena){};
};

class PechUstr :public Tehnika{
public:
	PechUstr(char* pro, char* name, int cena) :Tehnika(pro, name, cena){};
};


