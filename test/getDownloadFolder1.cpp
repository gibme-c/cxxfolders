#include "tester.hpp"
#include "../sago/platform_folders.h"

int main() {
	run_test(cxxfolders::getDownloadFolder1());
	cxxfolders::PlatformFolders p;
	run_test(p.getDownloadFolder1());
	return 0;
}
