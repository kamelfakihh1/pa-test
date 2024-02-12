#include <iostream>

void func1(){
	std::cout << "Function 1" << std::endl;
	return;
}

int main(int argc, char **argv) {
	std::cout << "Calling function 1" << std::endl;
	func1();
	std::cout << "Returned from function 1" << std::endl;
	return 0;
}
