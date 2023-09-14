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
            ListSpace::List* l = ListFactory::generateList("Adel", 100u);
            std::cout << l;
        }
        void test2()
        {
            ListSpace::List* l = ListFactory::generateList("Adel",100u, "Almaz", 95u);
            std::cout << l;
        }
        void test3()
        {
            ListSpace::List* l = ListFactory::generateListLoop("Adel", 100u, "Almaz", 95u, "Vasnetsov",795u);
         //   std::cout << l;
        }
	} // Testlist
} // Listspace