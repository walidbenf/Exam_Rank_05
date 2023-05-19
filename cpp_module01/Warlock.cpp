#include "Warlock.hpp"
Warlock::Warlock(std::string const &name,std::string const &title) : name(name), title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock() {
	for(std::vector <ASpell *>::iterator it = spells.begin();it != spells.end(); it++)
		delete *it;
	this->spells.clear();
	std::cout << name << ": My job here is done!" << std::endl;
}
std::string const &Warlock::getName() const {return name;}
std::string const &Warlock::getTitle() const {return title;}
void Warlock::setTitle(std::string const &title) {this->title = title;}
void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
void Warlock::learnSpell(ASpell *spell) {
	
	if (spell)
	{
		for(std::vector <ASpell *>::iterator it = spells.begin();it != spells.end(); it++)
		{
			if ((*it)->getName() == spell->getName())
				return ;
		}
	}
	this->spells.push_back(spell->clone());
}
void Warlock::forgetSpell(std::string spell) {
	for(std::vector <ASpell *>::iterator it = spells.begin();it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			delete *it;
			this->spells.erase(it);
			return ;
		}
	}
}
void Warlock::launchSpell(std::string spell, ATarget const &target){
	for(std::vector <ASpell *>::iterator it = spells.begin();it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
		{
			(*it)->launch(target);
			return;
		}
	}
}