// LabRab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;
#include "Weapon.h"
#include "Magic.h"
#include "oneused.h"
#include "Player.h"
/*struct item {
	int id;
	string login;
	string password;

};*/
int main()
{
	setlocale(LC_ALL, "");
	//Weapon sword("sword", 10, 3, "ONE");
	//cout << sword.getName() << sword.getDamage() << sword.getWeight() << sword.getType() << endl;
	//Weapon::move(Direction::ONE);
	/*item item1;
	item1.id = 1231;
	item1.login = "gghdlr";
	item1.password = "123abc";
	cout <<"id = " <<  item1.id << " login= " << item1.login << " password= " << item1.password << " " << endl;*/
	Magic magicSword("sword", 10, 3, "one", 9);
	Magic magicBow("bow", 7, 1, "bow", 13);
	Magic magicTwoHand("TwoHang", 20, 8, "bow", 5);
	/*magicSword.magic();
	magicSword.takeDamage();
	magicBow.takeDamage();
	magicTwoHand.takeDamage();
	int x1 = magicSword.com();
	int x2 = magicBow.com();
	int x3 = magicTwoHand.com();
	magicBow.com2(x1, x2, x3);*/
	magicSword.attack();
	oneused sword1("sword", 7, 2);
	sword1.setUse(2);
	sword1.attack();
	sword1.setUse(1);
	sword1.attack();
	Player <string> right("левая рука");
	right.setHand("правая рука");
	cout << right.getHand() << "\n";
	/*cout << "Передаем в шаблон тип данных int" << endl;
	Player <int> right(1);
	right.setHand(2);
	cout << right.getHand() << "\n";*/
	cin.get();
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
