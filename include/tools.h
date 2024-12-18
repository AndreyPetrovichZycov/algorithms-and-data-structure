#ifndef TOOLS
#define TOOLS

#include <vector>
#include <algorithm>

template <typename T> 
void generate(std::vector<T> &mas, long long int size)
{
	for (int i = 0; i < size; i++)
	{
		mas.push_back(static_cast<T>( rand() ));
	}
}


template <typename T>
void print_arr(const std::vector<T> &mas)
{
	for (int i = 0; i < mas.size(); i++) {
		std::cout << mas[i] << ", ";
	}
}


template <typename T>
void search_max(const std::vector<T> &mas) {
	std::cout << *(std::max_element(mas.begin(), mas.end())) << std::endl;
}

#endif // !TOOLS
