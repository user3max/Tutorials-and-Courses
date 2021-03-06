//Sorcerer.cpp by Carp-Bezverhnii Maxim
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name) , _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string	Sorcerer::getName() const {
	return this->_name;
}

std::string	Sorcerer::getTitle() const {
	return this->_title;
}

void		Sorcerer::polymorph(Victim const & src) const {
	src.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & src) {
	o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}