#include <iostream>
#include "include/CircularArray.h"

int main(int argc, const char * argv[])
{
	CircularArray<int> array(5);
	int buff[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++à
	{
		array.add(buff[i]);
	}	

	std::cout << "--------------------------" << std::endl;

	std::cout << array.getSize();
	array.prinOn(std::cout << std:endl);

	for (int i = 0; i < array.getSize(); i++)
	{
		std::cout << std:endl << array.get(i);	
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	for (int i = 6; i < 10; i++)
	{
		array.add(i);
		std::cout << array.peekFront() << " " << array.peekLast() << " ";
		array.printOn(std::cout) << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	for(CircularArray<int>::iterator it = array.getIterator(); it.hasNext();)
	{
		std::cout << it.next();
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	array.removeFront();
	array.printOn(std::cout);

	std::cout << std::endl << "--------------------------" << std::endl;

	while(!array.isEmpty())
	{
		std::cout << array.getSize() << " " << array.removeFront() << " ";
		array.printOn(std::cout) << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		array.add(buff[i]);
	}
	array.printOn(std:cout);
	array.clear();

	array.printOn(std::cout << std::encl << array.getSize());

	return 0;
}