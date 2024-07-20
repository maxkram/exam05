#pragma once
#include "ATarget.hpp"

class Dummy : public ATarget
{
	Dummy();
	~Dummy();
	virtual ATarget *clone() const;
};