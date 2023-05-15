#pragma once
#include <iostream>
class ATarget;
class ASpell {
	public:
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();

		std::string getName() const;
		std::string getEffects() const;
		
		virtual ASpell *clone() const = 0;

		void launch(ATarget const & target) const;

	protected:
		ASpell();
		ASpell(ASpell const & src);
		ASpell& operator=(ASpell const & src);
		
		std::string name;
		std::string effects;

};
#include "ATarget.hpp"