#pragma once
#include <iostream>
#include "List.h"

std::ostream& operator<< (std::ostream& o, const ListSpace::Record& record)
{
	o << "My name is: " << record.name << "; My mark is: " << static_cast<int>(record.mark) << '\n';
	return o;
}

std::ostream& operator<< (std::ostream& o, const ListSpace::List*  head)
{
	// we do not want to print a looped List
	// check for the loop first!!

	while (head != nullptr)
	{
		o << head->element;
		head = head->next();
	}
	o << std::endl;
	return o;
}

