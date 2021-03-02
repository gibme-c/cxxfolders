#include "tester.hpp"
#include "../sago/platform_folders.h"

int main() {
	run_test(cxxfolders::getCacheDir());
	return 0;
}
