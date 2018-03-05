#include <iostream>
#include "lib.h"

int main(int argc, char const **argv)
{
	std::cout << "Hello, World!" << std::endl;
	std::cout << "Version " << major_version()<<"."<<minor_version()<<"."<<patch_version() << std::endl;
	return 0;
}