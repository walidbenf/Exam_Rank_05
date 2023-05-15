#include "SpellBook.hpp"
SpellBook::SpellBook() {}
SpellBook::~SpellBook() {
	for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++) {
		delete *it;
	}
}
void SpellBook::learnSpell(ASpell *spell) {
	if (spell) {
		for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++) {
			if ((*it)->getName() == spell->getName()) {
				return;
			}
		}
		this->spells.push_back(spell->clone());
	}
}
void SpellBook::forgetSpell(std::string const &spellName) {
	for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++) {
		if ((*it)->getName() == spellName) {
			delete *it;
			this->spells.erase(it);
			return;
		}
	}
}
ASpell *SpellBook::createSpell(std::string const &spellName) {
	for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++) {
		if ((*it)->getName() == spellName) {
			return (*it)->clone();
		}
	}
	return NULL;
}