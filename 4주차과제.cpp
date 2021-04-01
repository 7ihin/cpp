#include <iostream>

using namespace std;

class Car 
{

private:
    string name;
    double cc;
    double hp;

public:
    Car() : name(), cc(0), hp(0) {}
    Car(string name, double cc, double hp) : name(name), cc(cc), hp(hp) {}

    string Getname() {
        return name;
    }
    void Setname(string name_) {
        name = name_;
    }

    double Getkm() {
        return cc;
    }

    void Setkm(double cc_) {
        cc = cc_;
    }

    double Gethp() {
        return hp;
    }

    void Sethp(double hp_) {
        hp = hp_;
    }

};

int main() {
    Car c1{ "2021 Mohabi",2959,260 };
    Car c2{ "2021 K7 ���̺긮��",2359,159 };
    Car c3{ "2021 K5",1598,180 };
    Car c4{ "2021 ����Ƽ��",1598,136 };

    cout << "[ KIA ]\n�𵨸�: " << c1.Getname() << "\n" << "��ⷮ:" << c1.Getkm() << " cc\n" << "�ִ����:" << c1.Gethp() << " hp\n" << endl;
    cout << "[ KIA ]\n�𵨸�: " << c2.Getname() << "\n" << "��ⷮ:" << c2.Getkm() << " cc\n" << "�ִ����:" << c2.Gethp() << " hp\n" << endl;
    cout << "[ KIA ]\n�𵨸�: " << c3.Getname() << "\n" << "��ⷮ:" << c3.Getkm() << " cc\n" << "�ִ����:" << c3.Gethp() << " hp\n" << endl;
    cout << "[ KIA ]\n�𵨸�: " << c4.Getname() << "\n" << "��ⷮ:" << c4.Getkm() << " cc\n" << "�ִ����:" << c4.Gethp() << " hp\n" << endl;

}