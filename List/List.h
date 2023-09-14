#pragma once
#include <string>
#include <vector>


// https://en.cppreference.com/w/cpp/container/list
// https://coderoad.ru/10275587/%D0%9F%D0%BE%D0%B8%D1%81%D0%BA-%D1%86%D0%B8%D0%BA%D0%BB%D0%B0-%D0%B2-%D0%BE%D0%B4%D0%BD%D0%BE%D1%81%D0%B2%D1%8F%D0%B7%D0%BD%D0%BE%D0%BC-%D1%81%D0%BF%D0%B8%D1%81%D0%BA%D0%B5
// https://en.wikipedia.org/wiki/Cycle_detection
// https://leetcode.com/problems/linked-list-cycle-ii/
// https://live-scripts.blogspot.com/2013/01/blog-post_16.html

namespace ListSpace
{
	using Mark = unsigned int;

	/**
	 * @brief Data type to be stored in the list
	 */
	struct Record
	{
		std::string name;
		Mark mark;
	};

	/**
	 * @brief A temlate list that can store any type of information
	 * @tparam T type of element in the list
	 */
	template<typename T>
	struct AdvancedList
	{
		T element;
		AdvancedList<T>* its_next;

		AdvancedList<T>(const T& el, AdvancedList<T>* its_next = nullptr) : element{ el }, its_next{ its_next } { };
		const T& get_data() const { return element; }
		T& set_data() { return element; }
		const AdvancedList<T>* next() const { return its_next; }
		AdvancedList<T>*& next() { return its_next; }
	};

	/**
	 * @brief an alias for the instantiated list template
	 */
	using List = AdvancedList<Record>;
} // ListSpace



