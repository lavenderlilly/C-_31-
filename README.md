# C++_31기
#include <iostream> //헤더파일 선언문
using namespace std;

int main()
{
	std::cout << "이름: " << "김 스윙" << std::endl;   /*std::cout <<을 이용한 출력 
	                                                   std::endl을 이용한 개행*/
	std::cout << "학번: " << "2023" << std::endl;
	std::cout << "반갑습니다. " << "김 스윙" << "님\n" << std::endl;

	std::cout << "학점 입력을 " << "시작합니다.\n" << std::endl;

	std::cout << "================" << " SWING 31기" << "================" << std::endl;

	float  val1;
	std::cout << "C프로그래밍(3학점): ";
	std::cin >> val1; // std::cin과 >> 연산자 이용한 출력

	float  val2;
	std::cout << "컴퓨터및정보보호개론(3학점): ";
	std::cin >> val2;

	float  val3;
	std::cout << "소프트웨어개발실무영어I(1학점): ";
	std::cin >> val3;

	float  val4;
	std::cout << "대학고급영어(2학점): ";
	std::cin >> val4;

	std::cout << "==========================================\n" << std::endl;

	float  result = (val1 * 3 + val2 * 3 + val3 * 1 + val4 * 2) / 9;
	
	std::cout << "김 스윙(2023)님의 전체 학점은 " << result << "입니다." << std::endl;

	return 0;

}
