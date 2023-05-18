#include "Warlock.hpp"
Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}
std::string const &Warlock::getName() const {return this->name;}
std::string const &Warlock::getTitle() const {return this->title;}
void Warlock::setTitle(std::string const &title) {this->title = title;}
void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
void Warlock::learnSpell(ASpell *spell) {
	this->book.learnSpell(spell);
}
void Warlock::forgetSpell(std::string spell) {
	this->book.forgetSpell(spell);
}
void Warlock::launchSpell(std::string spell, ATarget const &target) {
	ASpell *tmp = this->book.createSpell(spell);
	if (tmp)
		tmp->launch(target);
}