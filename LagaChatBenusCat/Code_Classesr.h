#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Common_communication {
public:
	void decree_main();
};
class Russifier {
public:
	void decree_Russifier();
};
class Screen_Decor {
public:
	void Epigraph();
	void Type_of_beginning();
	void Menu_Center(int* Quantity, int* _number_of_words);
	void View_of_the_registration_screen();
};
class User {
public:
	string name, login, password;
	int ban;
	vector<User>allowance;
	void User_Registration(int* Quantity_1);
	void All_the_group();
	void Security_of_entry(int* Key_4, string* ai);
	void User_Ban();
};
class Texst_class {
public:
	string texst;
	string safety;
	int text_numbering;
	vector<Texst_class>allowance_1;
	vector<Texst_class>allowance_2;
	vector<Texst_class>message_control;
	void general_chat(int* number_of_words, int* start_of_messages, int* end_of_messages, const string& poks);
	void private_chat(int* number_of_words, int* start_of_messages, int* end_of_messages, const string& poks);
};