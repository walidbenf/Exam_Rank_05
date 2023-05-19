#include "SpellBook.hpp"
SpellBook::SpellBook() {}
SpellBook::~SpellBook() {
	for(std::vector <ASpell *>::iterator it = spellbook.begin();it != spellbook.end(); it++)
		delete *it;
	this->spellbook.clear();
}
void SpellBook::learnSpell(ASpell *spell) {
	if(spell)
	{
		for(std::vector <ASpell *>::iterator it = spellbook.begin();it != spellbook.end(); it++)
		{
			if((*it)->getName() == spell->getName())
				return ;
		}
	}
	this->spellbook.push_back(spell->clone());
}
void SpellBook::forgetSpell(std::string const &spell) {
	for(std::vector <ASpell *>::iterator it = spellbook.begin();it != spellbook.end(); it++)
	{
		if((*it)->getName() == spell)
		{
			delete *it;
			this->spellbook.erase(it);
			return ;
		}
	}
}
ASpell *SpellBook::createSpell(std::string const &spell) {
	for(std::vector <ASpell *>::iterator it = spellbook.begin();it != spellbook.end(); it++)
	{
		if((*it)->getName() == spell)
			return (*it);
	}
	return NULL;
}