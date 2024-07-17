// #pragma once
// #include "ASpell.hpp"

// class Fwoosh: public ASpell {
// 	public:
// 		Fwoosh();
// 		~Fwoosh();
// 		virtual ASpell *clone() const;
// };

#pragma once
#include "ASpell.hpp"
class Fwoosh : public ASpell {
	public:
		Fwoosh();
		~Fwoosh();
		virtual ASpell *clone() const;
};