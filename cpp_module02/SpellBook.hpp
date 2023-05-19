#pragma once
#include "ASpell.hpp"
#include <vector>
class SpellBook {
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &spell);
		ASpell* createSpell(std::string const &spell);
	private:
		SpellBook(SpellBook const &src);
		SpellBook &operator=(SpellBook const &src);
		std::vector <ASpell *> spellbook;

};
