#include <iostream>

using namespace std;

int main()
{
	int x;              // 변수지정
	int* p;             // 변수에 대한 포인터를 지정

	p = &x;             // X의 주소를 P에 할당합니다
	cin >> x;           // X값을 입력하면  포인터도 사용할수있습니다
	cin.ignore();
	cout << *p << "\n"; // 포인터의 주소값을 가져와 출력합니다
	cin.get();			// 아마도 초기화 프로그램인것 같습니다. = return 0;
}
