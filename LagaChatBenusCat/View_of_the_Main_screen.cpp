#include "Code_Classesr.h"
#include <iostream>
#include <vector>
using namespace std;
void Screen_Decor::Epigraph() {
	Screen_Decor* memory_View = new Screen_Decor;
	Texst_class* memory_String = new Texst_class;
	User* memory_User = new User;
	int key_exit = 0, Quantity_, Quantity_1 = 0, number_of_words_, number_of_words_1 = 0, key_4 = 0, key_3, key_2, start_of_messages = 0, end_of_messages = 0, start_of_messages_ = 0, end_of_messages_ = 0, order_ = 0, musor_2;
	string input, input_chat, key, input_1, key_1, toii, toiii, musor_1 = "d";
	do {
		memory_View->Type_of_beginning();
		if (key_exit == 0) {
			cout << "^^^^^^^^^^^^^^^^^" << endl;
			cin >> input;
		}
		else {
			input = "Выход";
		}
		if (input == "Авторы") {
			cout << "_______Авторы_______" << endl;
			cout << "Я и мои страдания_" << endl;
			key = "Не_выход";
		}
		else if (input == "Подробности") {
			cout << "_______Подробности_______" << endl;
			cout << "Труд! Труд! и кот в прислуги" << endl;
			key = "Не_выход";
		}
		else if (input == "Инструкция") {
			cout << "_______Инструкция_______" << endl;
			cout << "Вводите то что написано в []\n Иногда будут подскази" << endl;
			key = "Не_выход";
		}
		else if (input == "Выход") {
			cout << "_______Выход_______" << endl;
			key = "Выход";
		}
		else if (input == "Продолжить") {
			do {
				number_of_words_ = number_of_words_1;
				Quantity_ = Quantity_1;
				memory_View->Menu_Center(&Quantity_, &number_of_words_);
				cout << "^^^^^^^^^^^^^^^^^" << endl;
				cin >> input_1;
				if (input_1 == "Регистрация") {
					cout << "_______Регистрация_______" << endl;
					memory_User->User_Registration(&Quantity_1);
					key_1 = "Не_Назад";
				}
				else if (input_1 == "Чат") {
					cout << "_______Чат_______" << endl;

					memory_User->Security_of_entry(&key_4, &toii);
					toiii = toii;
					if (key_4 == 1) {
						do {
							cout << "Общий чат/Личная переписка.\n[Общий/Личный]" << endl;
							cin >> input_chat;
							if (input_chat == "Общий") {
								key_2 = 1;
								key_3 = 1;
							}
							else if (input_chat == "Личный") {
								key_2 = 1;
								key_3 = 2;
							}
							else {
								cout << "Ошибка ввода!" << endl;
								key_2 = 0;
							}
						} while (key_2 != 1);
					}
					else if (key_4 == 0) {
						key_3 = 0;
						key_1 = "Не_Назад";
					}
					if (key_3 == 1) {
						memory_String->general_chat(&number_of_words_1, &start_of_messages, &end_of_messages, toiii);

						key_1 = "Не_Назад";
					}
					else if (key_3 == 2) {
						memory_String->private_chat(&number_of_words_1, &start_of_messages, &end_of_messages, toiii);
						key_1 = "Не_Назад";
					}
					else {
						key_1 = "Не_Назад";
					}
				}
				else if (input_1 == "Инструкция") {
					cout << "_______Инструкция_______" << endl;
					key_1 = "Не_Назад";
				}
				else if (input_1 == "Все") {
					cout << "_______Все_______" << endl;
					memory_User->All_the_group();
					key_1 = "Не_Назад";
				}
				else if (input_1 == "Бан") {
					cout << "_______Бан_______" << endl;
					cout << "Люди которых можно заблокировать" << endl;
					memory_User->All_the_group();
					memory_User->User_Ban();
					key_1 = "Не_Назад";
				}
				else if (input_1 == "Назад") {
					cout << "_______Назад_______" << endl;
					key_1 = "Назад";
				}
				else if (input_1 == "Выход") {
					key_1 = "Назад";
					key_exit = 1;
				}
				else {
					cout << "_______????????_______" << endl;
					key_1 = "Не_Назад";
				}
			} while (key_1 != "Назад");
		}
		else {
			cout << "_______????????_______" << endl;
		}
	} while (key != "Выход");
};
