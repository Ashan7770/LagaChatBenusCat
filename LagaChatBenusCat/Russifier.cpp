#include "Code_Classesr.h"
#include <iostream>
#include <Windows.h>
using namespace std;
void Russifier::decree_Russifier() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}