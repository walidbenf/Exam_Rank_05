#pragma once
#include <iostream>
#include <vector>
#include "ATarget.hpp"
class TargetGenerator{
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &name);
		ATarget *createTarget(std::string const &name);

	private:
		std::vector<ATarget *>	targets;
		TargetGenerator(const TargetGenerator &src);
		TargetGenerator &operator=(const TargetGenerator &src);
};