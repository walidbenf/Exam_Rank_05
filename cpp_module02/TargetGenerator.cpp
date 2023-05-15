#include "TargetGenerator.hpp"
TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
	std::vector<ATarget *>::iterator it = this->targets.begin();
	while (it != this->targets.end()) {
		delete *it;
		it++;
	}
}
void TargetGenerator::learnTargetType(ATarget *target) {
	if (target) {
		std::vector<ATarget *>::iterator it = this->targets.begin();
		while (it != this->targets.end()) {
			if ((*it)->getType() == target->getType()) {
				return;
			}
			it++;
		}
		this->targets.push_back(target->clone());
	}
}
void TargetGenerator::forgetTargetType(std::string const &name) {
	std::vector<ATarget *>::iterator it = this->targets.begin();
	while (it != this->targets.end()) {
		if ((*it)->getType() == name) {
			delete *it;
			this->targets.erase(it);
			return;
		}
		it++;
	}
}
ATarget *TargetGenerator::createTarget(std::string const &name) {
	std::vector<ATarget *>::iterator it = this->targets.begin();
	while (it != this->targets.end()) {
		if ((*it)->getType() == name) {
			return (*it)->clone();
		}
		it++;
	}
	return NULL;
}