#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iterator>
#include <Windows.h>

//���� �ʿ��Ѱ� 2����
//1. �ֿܼ��� ��ȣ���� ���� ���� �� ���� �޾Ƽ� ���� ����Ѵ�
//2. ���Ͽ��� �Է¹޾Ƽ� ���� �� ���� ������ �̸��� ��ģ �̸����� ������ ����

int main()
{
	int option = 0;
	int loop = 1;
	while (loop)
	{
		std::cout << "�۾��� �����Ͻʽÿ�.\n\t1.�ַܼ� �� ���� �Է¹ޱ�.\n\t2.���Ͽ��� �ҷ�����.\n��ȣ�� �Է����ּ��� : ";
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
			std::cout << "���� 1 �����̸� : ";
			std::cin >> filename1;
			std::cout << "���� 2 �����̸� : ";
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
			std::cout << "1�� 2 �̿��� ���� ���Խ��ϴ�. �ٽ� ������ �ּ���." << std::endl;
		}
	}
}