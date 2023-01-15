OBJ_NAME = Ch2 
TEST_SRC = TestRunner
install:
	cd build; cmake ..; make; mv compile_commands.json ../ 
run:
	cd build; ./$(OBJ_NAME)
test:
	cd build; ./$(TEST_SRC)
