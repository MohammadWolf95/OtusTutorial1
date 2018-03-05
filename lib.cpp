
#include <iostream>
#include "lib.h"


int patch_version()
{
	return PROJECT_VERSION_PATCH;
}

int minor_version(){
	return PROJECT_VERSION_MINOR;
}

int major_version(){
	return PROJECT_VERSION_MAJOR;
}