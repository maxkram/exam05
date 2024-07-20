#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target_ptr) {
	if (target_ptr)
		arr_target[target_ptr->getType()] = target_ptr;
}

void TargetGenerator::forgetTargetType(std::string const &target_name) {
	if (arr_target.find(target_name) != arr_target.end())
		arr_target.erase(arr_target.find(target_name));
}

ATarget *TargetGenerator::createTarget(std::string const &target_name) {
	ATarget *tmp = NULL;
	if (arr_target.find(target_name) != arr_target.end())
		tmp = arr_target[target_name];
	return tmp;
}