#include "exercises.h"

#include <iostream>

int* exercises::change_pointer_value(int* original_ptr, int* new_ptr) {
	original_ptr = new_ptr; 
	return original_ptr;
}

int exercises::change_pointed_value(int* original_ptr, int new_value) {
	*original_ptr = new_value;
	return new_value;
}


int exercises::square_using_pointer(int value) {
	int* val_ptr = &value;
	*val_ptr = *val_ptr * *val_ptr;
	return *val_ptr;
}

