#include "noble.h"
#include "book.h"
#include "iostream"

using namespace std;
// Q2b: Define displayBook() for Noble class (5 points)
// Define the function displayBook() that you declared within the Noble class in the header file
// See expected output in question file.
void Noble::displayBook()
{
	cout << "Book name: " << Book::getName() << endl;
	cout << "Copies: " << Book::getCopies() << endl;
	cout << "Library: Noble\n" << endl;
}

// (displayList() function in hw10.cpp should call this function.)
// Include necessary header files


