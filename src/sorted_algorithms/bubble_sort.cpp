#include <iostream>

template <typename T>
void bubble_sort(T* mas,long int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (mas[i] > mas[j]) {
				int tmp = mas[i];
				mas[i] = mas[j];
				mas[j] = tmp;
			}
		}
	}

}

template <typename T>
void generate(T* mas,long int size)
{
	for(int i=0; i<size; i++)
	{
		mas[i] = static_cast<float>(rand()) / 10000.f;
	}
}


template <typename T>
void print_arr(const T *mas,long int size)
{
	for (int i = 0; i < size; i++) {
		std::cout << mas[i] << ", ";
	}
}


template <typename T>
void search_max(T* mas, int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] > max) max = mas[i];
	}
	std::cout << "\nMax" << max << std::endl;
}


int main() {
	constexpr long int size = 100;
	float mas[size];

	generate<float>(mas, size);

	print_arr<float>(mas, size);

	std::cout <<std::endl<<"--------------------" << std::endl;
	search_max<float>(mas, size);

	bubble_sort<float>(mas, size);

	print_arr<float>(mas, size);

}