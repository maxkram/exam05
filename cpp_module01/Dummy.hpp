// #pragma once

// #include "ATarget.hpp"

// class Dummy: public ATarget
// {
// 	public:
// 		Dummy();
// 		~Dummy();

// 		virtual ATarget *clone() const;
// };

#pragma once
#include "ATarget.hpp"
class Dummy: public ATarget {
	public:
		Dummy();
		~Dummy();
		virtual ATarget *clone() const;
};