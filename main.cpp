#include <iostream>
#include "lib.h"

int main(int argc, char const **argv)
{
	std::cout << "Hello, World!" << std::endl;
	std::cout << "Version " << patch_version() << std::endl;
	return 0;
}