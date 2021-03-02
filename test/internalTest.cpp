#include "tester.hpp"
#include "../sago/platform_folders.h"
#include <string>
#include <vector>
#include <iostream>

int main() {
	std::vector<std::string> extraData;
	#if !defined(_WIN32) && !defined(__APPLE__)
	extraData.clear();
	cxxfolders::internal::appendExtraFoldersTokenizer("", "/hello:two:/three", extraData);
	if (extraData.at(0) != "/hello") {
		std::cerr << "cxxfolders::internal::appendExtraFoldersTokenizer did not return \"/hello\"\n";
		std::exit(EXIT_FAILURE);
	}
	if (extraData.at(1) != "/three") {
		std::cerr << "cxxfolders::internal::appendExtraFoldersTokenizer did not return \"/three\"\n";
		std::exit(EXIT_FAILURE);
	}
	#endif
	return 0;
}
