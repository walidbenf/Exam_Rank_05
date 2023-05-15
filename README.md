# Exam_Rank_05 42

## CPP_MODULE_00

### Expected files   : 
                                  Warlock.cpp Warlock.hpp
--------------------------------------------------------------------------------

Make a Warlock class. It has to be in Coplien's form.

It has the following private attributes :
* name (string)
* title (string)

Since they're private, you will write the following getters :
* getName, returns a reference to constant string
* getTitle, returns a reference to constant string

Both these functions will have to be callable on a constant Warlock.

Create the following setter:
* setTitle, returns void and takes a reference to constant string

Your Warlock will also have, in addition to whatever's required by Coplien's
form, a constructor that takes, in this order, its name and title. Your Warlock
will not be able to be copied, instantiated by copy, or instantiated without a
name and a title.

For example :

Warlock bob;                            //Does not compile
Warlock bob("Bob", "the magnificent");  //Compiles
Warlock jim("Jim", "the nauseating");   //Compiles
bob = jim;                              //Does not compile
Warlock jack(jim);                      //Does not compile

Upon creation, the Warlock says :

<NAME>: This looks like another boring day.

Of course, whenever we use placeholders like <NAME>, <TITLE>, etc...
in outputs, you will replace them by the appropriate value. Without the < and >.

When he dies, he says:

<NAME>: My job here is done!

Our Warlock must also be able to introduce himself, while boasting with all its
might.

So you will write the following function:
* void introduce() const;

It must display:

<NAME>: I am <NAME>, <TITLE>!

Here's an example of a test main function and its associated output:
  
```cpp
int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);
}
  ```
##  CPP_MODULE_01
### Expected files   :            
                                  Warlock.cpp Warlock.hpp
                                  ASpell.hpp ASpell.cpp
                                  ATarget.hpp ATarget.cpp
                                  Fwoosh.hpp Fwoosh.cpp
                                  Dummy.hpp Dummy.cpp
  --------------------------------------------------------------------------------

In the Warlock class, the switch statement is FORBIDDEN and its use would
result in a -42.

Create an abstract class called ASpell, in Coplien's form, that has the
following protected attributes:

* name (string)
* effects (string)

Both will have getters (getName and getEffects) that return strings.

Also add a clone pure method that returns a pointer to ASpell.

All these functions can be called on a constant object.

ASpell has a constructor that takes its name and its effects, in that order.

Now you will create an ATarget abstract class, in Coplien's form. It has a type
attribute, which is a string, and its associated getter, getType, that return a
reference to constant string.

In much the same way as ASpell, it has a clone() pure method.

All these functions can be called on a constant object.

It has a constructor that takes its type.

Now, add to your ATarget a getHitBySpell function that takes a reference to
constant ASpell.

It will display :

<TYPE> has been <EFFECTS>!

<TYPE> is the ATarget's type, and <EFFECTS> is the return of the ASpell's
getEffects function.

Finally, add to your ASpell class a launch function that takes a reference to
constant ATarget.

This one will simply call the getHitBySpell of the passed object, passing the
current instance as parameter.

When all this is done, create an implementation of ASpell called Fwoosh. Its
default constructor will set the name to "Fwoosh" and the effects to
"fwooshed". You will, of course, implement the clone() method. In the case of
Fwoosh, it will return a pointer to a new Fwoosh object.

In the same way, create a concrete ATarget called Dummy, the type of which
is "Target Practice Dummy". You must also implement its clone() method.

Add to the Warlock the following member functions:

* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  Warlock forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.

You will need a new attribute to store the spells your Warlock knows. Several
types fit the bill, it's up to you to choose the best one.

Below is a possible test main and its expected output:

  ```cpp
int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}
```

### Instructions
```sh
make
```
Le main se situe dans le module02 (il peut-être modifier et tester pour les autres modules)
