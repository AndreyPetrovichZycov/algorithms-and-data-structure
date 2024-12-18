#ifndef INSERTION_SORT
#define INSERTION_SORT

#include <vector>
#include <functional>

template <typename T>
using functor = std::function<bool(T a, T b)>;


template <typename T>
void insertion_sort(std::vector<T> &mas, functor<T> cond = standart<T>) {

	for (int i = 0; i < mas.size(); i++) {

		T key = mas[i];
		int j = i - 1;
		while (j >= 0 && cond(mas[j], key)) {
			mas[j+1] = mas[j];
			j--;
		}
		mas[j + 1] = key;

	}

}
#endif