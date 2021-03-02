#include "tester.hpp"
#include "../sago/platform_folders.h"

int main() {
	run_test(cxxfolders::getPicturesFolder());
	cxxfolders::PlatformFolders p;
	run_test(p.getPicturesFolder());
	return 0;
}
