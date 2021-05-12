#ifndef _NOBLE_H_
#define _NOBLE_H_
#include "book.h"
// Q1b: Create Noble class (5 points)
// Part 1: Create a child class of the Book class named 'Noble'


class Noble : public Book
{

// Part2: Declare constructor which accepts the same 3 parameters as the parent class Book's constructor.
// Pass the 3 parameters to the super constructor of the Book class.

public:
	Noble(string bookName, int noOfCopies, libraryType libType) :
		Book(bookName, noOfCopies, libType)
	{}

	// Part 3: Re-declare the method displayBook (virtual method found inside of parent class Book)

	void displayBook();
};
#endif // _NOBLE_H_