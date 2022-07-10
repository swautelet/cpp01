#include"Harl.hpp"

enum ErrorLevel{
	OTHER = 0,
	DEBUG = 1,
	INFO = 2,
	WARNING = 3,
	ERROR = 4
};

static std::map<std::string, ErrorLevel> MapErrorLevel;

Harl::Harl(void)
{
	MapErrorLevel["DEBUG"] = DEBUG;
	MapErrorLevel["INFO"] = INFO;
	MapErrorLevel["WARNING"] = WARNING;
	MapErrorLevel["ERROR"] = ERROR;
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::some_other_complain(void)
{
	std::cout << "Some non important complain." << std::endl;
}

void Harl::complain(std::string level)
{
	switch(MapErrorLevel[level])
	{
		case 1:
			this->debug();
			break ;
		case 2:
			this->info();
			break ;
		case 3:
			this->warning();
			break ;
		case 4:
			this->error();
			break ;
		default:
			this->some_other_complain();
			break ;
	}
}
