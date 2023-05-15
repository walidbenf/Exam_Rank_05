#pragma once
#include <iostream>
#include <vector>
#include "ASpell.hpp"

class SpellBook {
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &name);
		ASpell *createSpell(std::string const &name);

	private:
		SpellBook(const SpellBook &src);
		SpellBook &operator=(const SpellBook &src);
		std::vector<ASpell *>	spells;
};