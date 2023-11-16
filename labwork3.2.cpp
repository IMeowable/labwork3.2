// labwork3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//#include <iostream>
#include <fstream>
#include <string>     // для std::getline
#include <iostream>
#include <fstream>
#include <vector>
#include <iostream>

std::string firstnum;
std::string secondnum;

void string_split_to_int(std::string fromfile)
{

	int temp;
	std::vector <int> vec;
	std::ifstream fl("numbs.txt");
	while (fl >> temp)
		vec.push_back(temp);
	fl.close();
	std::cout << vec[0] + vec[1];
}

int main()
{
	std::string line;

	std::ifstream in("numbs.txt"); // окрываем файл для чтения
	if (in.is_open())
	{
		{
			while (std::getline(in, line))
			{
				std::cout << line << std::endl;
			}
		}
		string_split_to_int(line);
	}
