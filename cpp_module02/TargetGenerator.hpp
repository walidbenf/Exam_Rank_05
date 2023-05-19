#pragma once
#include "ATarget.hpp"
#include <vector>
class TargetGenerator {
	
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* type);
		void forgetTargetType(std::string const &type);
		ATarget* createTarget(std::string const &target);

	private:
		TargetGenerator(TargetGenerator const &src);
		TargetGenerator &operator=(TargetGenerator const &src);
		std::vector <ATarget*> gtarget;
};