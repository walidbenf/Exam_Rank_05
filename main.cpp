#include "cpp_module02/Warlock.hpp"
#include "cpp_module02/Fwoosh.hpp"
#include "cpp_module02/Dummy.hpp"
#include "cpp_module02/Fireball.hpp"
#include "cpp_module02/Polymorph.hpp"
#include "cpp_module02/BrickWall.hpp"
#include "cpp_module02/TargetGenerator.hpp"
int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}