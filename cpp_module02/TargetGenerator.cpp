#include "TargetGenerator.hpp"
TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
	for(std::vector <ATarget *>::iterator it = gtarget.begin();it != gtarget.end(); it++)
		delete *it;
	this->gtarget.clear();
}
void TargetGenerator::learnTargetType(ATarget *type) {
	
	if(type)
	{
		for(std::vector <ATarget *>::iterator it = gtarget.begin();it != gtarget.end(); it++)
		{
			if ((*it)->getType() == type->getType())
				return;
		}
	}
	this->gtarget.push_back(type->clone());
}
void TargetGenerator::forgetTargetType(std::string const &type) {
	for(std::vector <ATarget *>::iterator it = gtarget.begin();it != gtarget.end(); it++)
	{
		if((*it)->getType() == type)
		{
			delete *it;
			this->gtarget.erase(it);
			return ;
		}
	}
}
ATarget *TargetGenerator::createTarget(std::string const &target) {
	for(std::vector <ATarget *>::iterator it = gtarget.begin();it != gtarget.end(); it++)
	{
		if((*it)->getType() == target)
			return (*it);
	}
	return NULL;
}