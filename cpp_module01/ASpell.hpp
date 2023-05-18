#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell{
	public:
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		virtual ASpell *clone() const = 0;
		std::string getName() const;
		std::string getEffects() const;
		void launch(ATarget const &target) const;
	private:
		ASpell(ASpell const &src);
		ASpell &operator=(ASpell const &src);
		std::string name;
		std::string effects;
};	