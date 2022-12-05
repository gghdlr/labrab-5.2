#pragma once
#include "Weapon.h"
using namespace std;
class Magic :
    public Weapon
{
private:
    /*float magicDamage;*/
    string name;
    int damage;
    int weight;
    string type;
    int magicDamage;

public:
    Magic(string name, int damage, int weight, string type, int magicDamage) :name(name), damage(damage), weight(weight), type(type), magicDamage(magicDamage){

    }
    /*/int getMagicDamage();
    void magic();
    void takeDamage() override;
    Magic();
    int com() override;*/
    /*void com2(int y, int y1, int y2) override;*/
    void attack() {
        std::cout << "Атакуем магичесмким оружием" << std::endl;
    }
};

