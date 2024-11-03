#include <iostream>
#include <Windows.h>
#include "Code_Classesr.h"
#include <vector>
using namespace std;
int main() {
	Common_communication* memory_main = new Common_communication;
	memory_main->decree_main();
	delete memory_main;
	return 0;
};