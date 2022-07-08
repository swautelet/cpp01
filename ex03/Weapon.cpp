#include"Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
	// std::cout << "my type is " << this->_type << std::endl;
	return ;
}

Weapon::~Weapon()
{
	// std::cout << "my type was " << this->_type << std::endl;
	return ;
}

std::string&	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string name)
{
	// std::cout << "my new type is " << name << std::endl;
	this->_type = name;
}