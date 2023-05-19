#include "ASpell.hpp"
ASpell::ASpell(std::string name,std::string effects) : name(name), effects(effects) {}
ASpell::~ASpell() {}
std::string ASpell::getName() const {return this->name;}
std::string ASpell::getEffects() const {return this->effects;}
void ASpell::launch(ATarget const &target) const{
	target.getHitBySpell(*this);
}