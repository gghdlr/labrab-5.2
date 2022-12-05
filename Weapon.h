#pragma once
using namespace std;
#include <iostream>
/*enum class Direction {
	ONE,
	TWO,
	BOW,
	CROSSBOW
};*/
class Weapon
{
/*private:
	string name;
	int damage;
	int weight;
	string type;*/
public:
	/*string getName();
	//int getDamage();
	int getWeight();
	string getType();
	static const int ONE = 1;
	static const int TWO = 2;
	static const int BOW = 3;
	static const int CROSSBOW = 4;
	static void move(Direction d);
	virtual void takeDamage();
	virtual int com();
	virtual void com2(int y, int y1, int y2);*/
	virtual void attack() = 0;
};



