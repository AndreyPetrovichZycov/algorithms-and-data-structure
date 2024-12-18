#include <iostream>
#include "../../include/tools.h"
#include "../../include/bubble_sort.h"
#include "../../include/insertion_sort.h"



int main() {
	constexpr long int size = 100;
	std::vector<float> mas;
	

	generate<float>(mas, size);

	print_arr<float>(mas);

	std::cout <<std::endl<<"--------------------" << std::endl;

	//search_max<float>(mas);
	std::cout << "\n--------------\n";

	auto cond = [](float a, float b) {if (a < b) return true; else return false; };


	//bubble_sort<float>(mas, cond);
	insertion_sort<float>(mas, cond);
	

	print_arr<float>(mas);

}


