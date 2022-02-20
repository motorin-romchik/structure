/*Вариант 12
Объект для разработки структуры – ноутбук.
Объявить поля:
– Название фирмы
– Вес
– Цена.*/
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct pc {
	string company;
	double weight;
	double price;
};
 void input(pc & p) {
	 cout << " Название фирмы: ";
	 cin >> p.company;
	 cout << " Вес: ";
	 cin >> p.weight;
	 cout << " Цена: ";
	 cin >> p.price;

	
}

 void output(const pc & p) {
	 cout << " Название фирмы: ";
	 cout << p.company;
	 cout << endl << " Вес: ";
	 cout << p.weight;
	 cout << endl << " Цена: ";
	 cout << p.price << endl;
 }
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool flag = false;
	int lenghtar;//array lenght
	cout << "Добро пожаловать в систему учета данных ноутбуков." << endl;
	cout << "   Сколько ноутбуков будем регистрировать : ";
	cin >> lenghtar;
	pc* laptop = new pc[lenghtar];
	
	for (;;) {
		
		int var = 0;
		cout << "	Меню" << endl;
		cout << "	1.Ввод в систему." << endl;
		cout << "	2.Вывод из системы." << endl;
		cin >> var;
		if (var == 1) {
			//input
			system("color 2");
			int count = 0;
			for (int i = 0; i < lenghtar;i++) {
				cout << endl;
				count++;
				cout << "Ноутбук № " << count << endl;
				input(laptop[i]);
			}
			
			var = 2;
			flag = true;
		}
		else if (var == 2) {
			//output
			int count = 0;
			if (!flag)
				return 0;
			else
			{
				system("cls");
				system("color 4");
				cout<<("------------------------------------------------------------------------------------------------------------------------------------------");
				cout <<endl<< " Вывод из базы данных.";
				for (int i = 0; i < lenghtar;i++) {
					cout << endl;
					count++;
					cout << "Ноутбук № " << count << endl;
					output(laptop[i]);
				}
				cout <<endl << endl << "Выход....";
				Sleep(1200);
				return 0;
			}
		}
		else
			return 0;
	}
}