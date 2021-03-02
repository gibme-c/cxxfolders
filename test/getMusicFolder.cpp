#include "tester.hpp"
#include "../sago/platform_folders.h"

int main() {
	run_test(cxxfolders::getMusicFolder());
	cxxfolders::PlatformFolders p;
	run_test(p.getMusicFolder());
	return 0;
}
