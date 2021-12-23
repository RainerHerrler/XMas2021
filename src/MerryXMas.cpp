#include <iostream>
using namespace std;

void paintTree(int iSpace, int iSize, char cTree);

int main(){
    char cTree;
    int iSize, iSpace;

    std::cout << "Christmas Tree Application Amanda" << std::endl;
    std::cout << "Enter the size of your christmas tree: ";
    std::cin >> iSize;
    std::cout << "Enter the character you would like to use for your tree: ";
    std::cin >> cTree;

	paintTree(iSpace, iSize, cTree);
    return 0;
}
