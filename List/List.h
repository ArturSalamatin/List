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
	using Mark = int;

	struct Record
	{
		std::string name;
		Mark mark;
	};

	template<typename T>
	struct AdvancedList
	{
		T element;
		AdvancedList<T>* next;
		AdvancedList<T>(const T& el, AdvancedList<T>* next = nullptr) : element{ el }, next{ next } { };
	};

	using List = AdvancedList<Record>;
} // ListSpace



