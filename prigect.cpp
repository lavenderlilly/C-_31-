#include <iostream> //헤더파일 선언문
using namespace std;

int main() {

       char name[12];// 이름 변수
       int nuber; //학번 변수

       cout << "이름: ";   //cout <<을 이용한 출력 std:: 생략
	   cin.get(name, 12); //공백을 포함한 문자열                   
	   cout << "학번: "; // 학번 입력
	   cout << "반갑습니다. " << name << "님\n\n";
       cout << "학점 입력을 시작합니다.\n" << endl;

	cout << "================" << " SWING 31기" << "================" << endl;

	float  val1;                                //소수점 자료형의 변수
	cout << "C프로그래밍(3학점): ";
	cin >> val1; // cin과 >> 연산자 이용한 출력

	float  val2;
	cout << "컴퓨터및정보보호개론(3학점): "; 
	cin >> val2;

	float  val3;
	cout << "소프트웨어개발실무영어I(1학점): ";
	cin >> val3;

	float  val4;
	cout << "대학고급영어(2학점): ";
	cin >> val4;

	cout << "==========================================\n" << endl;

	float  result = (val1 * 3 + val2 * 3 + val3 * 1 + val4 * 2) / 9; 
	
	cout << "김 스윙(2023)님의 전체 학점은 " << result << "입니다." << endl;

	return 0;

}
