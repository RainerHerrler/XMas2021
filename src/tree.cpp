#include <string>
#include <iostream>

void paintTree(int iSpace, int iSize, char cTree) {
	iSpace = iSize;
	for (int i = 0; i < iSize * 2; i += 2) {
		std::string sTree(i, cTree);
		std::string sSpace(iSpace, ' ');
		std::cout << sSpace + sTree + sSpace << std::endl;
		iSpace -= 1;
	}
	std::cout << "           ***" << std::endl;
	std::cout << "           ***" << std::endl;
	std::cout << "           ***" << std::endl;
}



