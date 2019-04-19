#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iterator>
#include <Windows.h>

//지금 필요한거 2가지
//1. 콘솔에서 부호없는 양의 정수 두 값을 받아서 합을 출력한다
//2. 파일에서 입력받아서 합을 두 개의 파일의 이름을 합친 이름으로 파일을 생성

int main()
{
	int option = 0;
	int loop = 1;
	while (loop)
	{
		std::cout << "작업을 선택하십시오.\n\t1.콘솔로 두 정수 입력받기.\n\t2.파일에서 불러오기.\n번호를 입력해주세요 : ";
		std::cin >> option;
		if (option == 1)
		{
			unsigned int input1{ 0 };
			unsigned int input2{ 0 };
			std::cout << "\t";
			std::cin >> input1;
			std::cout << "+\t";
			std::cin >> input2;
			unsigned int total{ input1 + input2 };
			std::cout << "=\t" << total << std::endl;
		}
		else if (option == 2)
		{
			std::string filename1{ "" };
			std::string filename2{ "" };
			std::cout << "정수 1 파일이름 : ";
			std::cin >> filename1;
			std::cout << "정수 2 파일이름 : ";
			std::cin >> filename2;
			std::ifstream in1(filename1);
			std::ifstream in2(filename2);
			std::vector<std::string> num1{ std::istream_iterator<std::string>(in1),std::istream_iterator<std::string>() };
			std::vector<std::string> num2{ std::istream_iterator<std::string>(in2),std::istream_iterator<std::string>() };
			std::cout << "\t";
			for (std::string c : num1)
				std::cout << c;
			std::cout << "\n+\t";
			for (std::string c : num2)
				std::cout << c;
			std::cout << "\n";

		}
		else
		{
			system("cls");
			std::cout << "1과 2 이외의 값이 들어왔습니다. 다시 시작해 주세요." << std::endl;
		}
	}
}