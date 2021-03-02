#include "tester.hpp"
#include "../sago/platform_folders.h"
#include <string>
#include <vector>

// This is all tests in one
int main() {
	// Test plain functions
	run_test(cxxfolders::getConfigHome());
	run_test(cxxfolders::getDataHome());
	run_test(cxxfolders::getCacheDir());
	// Test non-member functions
	run_test(cxxfolders::getDesktopFolder());
	run_test(cxxfolders::getDocumentsFolder());
	run_test(cxxfolders::getDownloadFolder());
	run_test(cxxfolders::getDownloadFolder1());
	run_test(cxxfolders::getPicturesFolder());
	run_test(cxxfolders::getPublicFolder());
	run_test(cxxfolders::getMusicFolder());
	run_test(cxxfolders::getVideoFolder());
	run_test(cxxfolders::getSaveGamesFolder1());
	run_test(cxxfolders::getSaveGamesFolder2());
	// Test class methods
	cxxfolders::PlatformFolders p;
	run_test(p.getDocumentsFolder());
	run_test(p.getDesktopFolder());
	run_test(p.getPicturesFolder());
	run_test(p.getMusicFolder());
	run_test(p.getVideoFolder());
	run_test(p.getDownloadFolder1());
	run_test(p.getSaveGamesFolder1());
	// Test vector function
	std::vector<std::string> extraData;
	cxxfolders::appendAdditionalDataDirectories(extraData);
	run_test(extraData);
	return 0;
}
