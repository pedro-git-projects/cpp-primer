#include <gtest/gtest.h>
#include <exercises.h>
#include <memory>

TEST(ExercisesTest, ChangePointerValueTest) {
	int original_ptr { 3 };
	int new_ptr { 3 };

	int* original_ptr_addr = std::addressof(original_ptr);

	int* new_ptr_addr { exercises::change_pointer_value(&original_ptr, &new_ptr) };

	EXPECT_FALSE(new_ptr_addr == original_ptr_addr);
}

TEST(ExercisesTest, ChangePointedValueTest) {
	int original_ptr { 3 };
	int new_ptr_val { exercises::change_pointed_value(&original_ptr, 4) };

	EXPECT_EQ(original_ptr, 4);
}

TEST(ExercisesTest, SquareUsingPointerTest) {
	auto result = exercises::square_using_pointer(42);
	EXPECT_EQ(result, 1764);
}
