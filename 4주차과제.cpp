#include <iostream>

using namespace std;

class Car 
{

private:
    string name;
    double cc;
    double hp;

public:
    Car() : name(), cc(0), hp(0){}
    Car(string name, double cc, double hp) : name(name), cc(cc), hp(hp) {}

    string GetName() {
        return name;
    }
    void SetName(string name_) {
        name = name_;
    }

    double GetKm() {
        return cc;
    }

    void SetKm(double cc_) {
        cc = cc_;
    }

    double GetHp() {
        return hp;
    }

    void Setp(double hp_) {
        hp = hp_;
    }

};

int main() {
    Car c1{ "2021 Mohabi",2959,260 };
    Car c2{ "2021 K7 하이브리드",2359,159 };
    Car c3{ "2021 K5",1598,180 };
    Car c4{ "2021 스포티지",1598,136 };
    
   
    cout << "[ KIA ]\n모델명: " << c1.GetName() << "\n" << "배기량:" << c1.GetKm() << " cc\n" << "최대출력:" << c1.GetHp() << " hp\n" << endl;
    cout << "[ KIA ]\n모델명: " << c2.GetName() << "\n" << "배기량:" << c2.GetKm() << " cc\n" << "최대출력:" << c2.GetHp() << " hp\n" << endl;
    cout << "[ KIA ]\n모델명: " << c3.GetName() << "\n" << "배기량:" << c3.GetKm() << " cc\n" << "최대출력:" << c3.GetHp() << " hp\n" << endl;
    cout << "[ KIA ]\n모델명: " << c4.GetName() << "\n" << "배기량:" << c4.GetKm() << " cc\n" << "최대출력:" << c4.GetHp() << " hp\n" << endl;

}
