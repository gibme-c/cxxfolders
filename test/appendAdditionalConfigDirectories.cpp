#include "tester.hpp"
#include "../sago/platform_folders.h"
#include <string>
#include <vector>

int main() {
	std::vector<std::string> extraData;
	cxxfolders::appendAdditionalConfigDirectories(extraData);
	run_test(extraData);
	return 0;
}
