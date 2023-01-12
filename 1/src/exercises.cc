#include "exercises.h"

#include <iterator>
#include <set>
#include <map>
#include <algorithm>

int exercises::get_sum() {
	int sum = 0;
	int current_input = 0;

	std::cout << "Enter EOF to exit" << std::endl;

	// This condition is false when we hit EOF or invalid input
	while(std::cin >> current_input) {
		sum += current_input;
	}

	return sum;
}

void exercises::print_sum(int sum) {
	std::cout << "The sum was: " << sum << std::endl;
}


void exercises::count_repeated_inputs() {
	std::cout << "Input will be read until EOF " << std::endl;

	int input = 0;
	std::set<int> inputs;
	std::map<int, int> repeated; // <input, repetitions>
	bool was_emplaced;

	while (std::cin >> input) {
		auto result =  inputs.emplace(input);
		was_emplaced = result.second;

		if(was_emplaced) {
			repeated.insert({ input, 1 });
		} else {
			repeated.at(input)++;
		}
	}

	for(auto const& value : repeated) {
		std::cout << value.first << " was repeated " << value.second << " times" << std::endl;
	}

}


void exercises::swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
