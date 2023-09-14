#include <iostream>

#include "TestList.h"
#include "ListFactory.h"
#include "StreamOutput.h"

namespace ListSpace
{
	namespace TestList
	{
        void test1()
        {
            ListSpace::List* l = ListFactory::generateList("Adel", 100);
            std::cout << l;
        }
        void test2()
        {
            ListSpace::List* l2 = ListFactory::generateList("Adel",100, "Almaz", 95);
            std::cout << l2;
        }
        void test3()
        {
            ListSpace::List* l2 = ListFactory::generateListLoop("Adel", 100, "Almaz", 95);
        }
	} // Testlist
} // Listspace