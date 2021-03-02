#include "tester.hpp"
#include "../sago/platform_folders.h"

int main() {
	run_test(cxxfolders::getDocumentsFolder());
	cxxfolders::PlatformFolders p;
	run_test(p.getDocumentsFolder());
	return 0;
}
