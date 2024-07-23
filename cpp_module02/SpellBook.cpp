#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
	while (this->arr_spell.begin() != this->arr_spell.end())
	{
		delete this->arr_spell.begin()->second;
		this->arr_spell.erase(arr_spell.begin());
	}
	this->arr_spell.clear();
}

void SpellBook::learnSpell(ASpell *spell_ptr)
{
	if (spell_ptr)
		this->arr_spell[spell_ptr->getName()] = spell_ptr->clone();
}

void SpellBook::forgetSpell(std::string const &spell_name)
{
	if (this->arr_spell[spell_name])
		delete this->arr_spell[spell_name];
	this->arr_spell.erase(spell_name);
}

ASpell *SpellBook::createSpell(std::string const &spell_name)
{
	if (this->arr_spell[spell_name])
		return this->arr_spell[spell_name]->clone();
	return NULL;
}
