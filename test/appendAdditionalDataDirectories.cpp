#include "tester.hpp"
#include "../sago/platform_folders.h"
#include <string>
#include <vector>
#include <iostream>

int main() {
	std::vector<std::string> extraData;
	cxxfolders::appendAdditionalDataDirectories(extraData);
	run_test(extraData);
	return 0;
}
