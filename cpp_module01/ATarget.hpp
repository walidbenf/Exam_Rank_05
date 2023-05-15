#pragma once
#include <iostream>

class ASpell;
class ATarget {
	public:
		ATarget(std::string const & type);
		virtual ~ATarget();

		std::string const & getType() const;

		virtual ATarget *clone() const = 0;
		void getHitBySpell(ASpell const & spell) const;


	private:
		ATarget();
		ATarget(ATarget const & src);
		ATarget & operator=(ATarget const & src);

		std::string type;
};
#include "ASpell.hpp"