#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
	while(this->arr_target.begin() != this->arr_target.end())
	{
		delete this->arr_target.begin()->second;
		this->arr_target.erase(arr_target.begin());
	}
	this->arr_target.clear();
}

void TargetGenerator::learnTargetType(ATarget *target_ptr)
{
	if (target_ptr)
		this->arr_target[target_ptr->getType()] = target_ptr->clone();
}

void TargetGenerator::forgetTargetType(const std::string &target_name)
{
	if (this->arr_target[target_name])
		delete this->arr_target[target_name];
	this->arr_target.erase(target_name);

}

ATarget *TargetGenerator::createTarget(const std::string &target_name)
{
	if (this->arr_target[target_name])
		return this->arr_target[target_name]->clone();
	return NULL;
}
