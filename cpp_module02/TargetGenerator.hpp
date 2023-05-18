#pragma once
#include <iostream>
#include <vector>
#include "ATarget.hpp"
class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *type);
		void forgetTarget(std::string const &target);
		ATarget *createTarget(std::string const &target);
	private:
		TargetGenerator(TargetGenerator const &src);
		TargetGenerator &operator=(TargetGenerator const &src);
		std::vector <ATarget*> gtarget;

};