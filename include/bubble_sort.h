#ifndef BUBBLE_SORT
#define BUBBLE_SORT


#include <vector>
#include <functional>

template <typename T>
using functor = std::function<bool(T a, T b)>;

template <typename T>
auto standart = [](T a, T b) {if (a > b) return true; else return false; };

template <typename T>
void bubble_sort(std::vector<T>& mas,functor<T> cond = standart<T>)
{
	for (int i = 0; i < mas.size(); i++) {
		for (int j = i + 1; j < mas.size(); j++) {
			if (cond(mas[i], mas[j] )) {
				T tmp = mas[i];
				mas[i] = mas[j];
				mas[j] = tmp;
			}
		}
	}

}
#endif // !BUBBLE_SORT
