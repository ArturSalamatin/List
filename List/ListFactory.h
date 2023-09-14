#pragma once
#include "List.h"
namespace ListSpace 
{
	struct ListFactory
	{
		template< typename... Args>
		static constexpr List* generateListLoop(Args... args)
		{
			static_assert(((sizeof...(args)) % 2 == 0), "The last list element cannot be created: not enough constructor arguments!"); // check the parameter count

			List* head{ helperListGenerator(args...) };
			return SetLoop(head);
		}
	
		static List* SetLoop(List* list)  
		{
			List* head = list;

			while (head->next != nullptr)
			{
				head = head->next;
			}
			head->next = list;
			return list;
		}

		template< typename... Args>
		static constexpr List* generateList(Args... args)
		{
			static_assert(((sizeof...(args)) % 2 == 0), "The last list element cannot be created: not enough constructor arguments!"); // check the parameter count
			return helperListGenerator(args...);
		}

	private:

		// generates a list, element by element using a variadic template recursive function
		template<typename Name, typename Mark, typename... Args>
		static constexpr List* helperListGenerator(Name name, Mark mark, Args... args)
		{
			List* l = new List{ Record{name, mark}, helperListGenerator(args...) };
			return l;
		}
		// generates a list of zeo elements --- returns a nullptr --- it is a base for a variadic template recursive function
		// it is only a helper function that is used by the ListFactory class methods
		static constexpr List* helperListGenerator()
		{
			return nullptr;
		}
	};
} //ListSpace

