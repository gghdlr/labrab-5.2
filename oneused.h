#pragma once
#include "Weapon.h"
#include <iostream>
using namespace std;
class oneused :
    public Weapon
{
private:
    string name;
    int damage;
    int use;
public:
    oneused(string name, int damage,int use) {
    }
    int getUse() {
        return use;
    }
    void setUse(int use) {
        this->use = use;
    }
    int usage() {
        if (use == 1) {
            cout << "������ ��� ���� ������������";
        }
        else if (use == 2) {
            cout << "������� ����������� �������";
        }
        return 0;
    }
    void attack() {
        cout << usage() << std::endl;
    }
};

