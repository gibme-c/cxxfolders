#include "tester.hpp"
#include "../sago/platform_folders.h"

int main() {
	run_test(cxxfolders::getSaveGamesFolder1());
	cxxfolders::PlatformFolders p;
	run_test(p.getSaveGamesFolder1());
	return 0;
}
