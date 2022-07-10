#ifndef HARL_HPP
# define HARL_HPP
#include <string>
#include <iostream>
#include <map>

class Harl{
	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void some_other_complain(void);
		
};

#endif