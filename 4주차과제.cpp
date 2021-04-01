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
    Car c2{ "2021 K7 하이브리드",2359,159 };
    Car c3{ "2021 K5",1598,180 };
    Car c4{ "2021 스포티지",1598,136 };

    cout << "[ KIA ]\n모델명: " << c1.Getname() << "\n" << "배기량:" << c1.Getkm() << " cc\n" << "최대출력:" << c1.Gethp() << " hp\n" << endl;
    cout << "[ KIA ]\n모델명: " << c2.Getname() << "\n" << "배기량:" << c2.Getkm() << " cc\n" << "최대출력:" << c2.Gethp() << " hp\n" << endl;
    cout << "[ KIA ]\n모델명: " << c3.Getname() << "\n" << "배기량:" << c3.Getkm() << " cc\n" << "최대출력:" << c3.Gethp() << " hp\n" << endl;
    cout << "[ KIA ]\n모델명: " << c4.Getname() << "\n" << "배기량:" << c4.Getkm() << " cc\n" << "최대출력:" << c4.Gethp() << " hp\n" << endl;

}