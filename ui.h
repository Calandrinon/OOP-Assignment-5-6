#include <iostream>
#include <vector>
#include "service.h"

class UI {
	private:
		char security_clearance_mode;
		bool running;
		Service* service;
		std::string last_command;

	public:
		UI(Service*);
		void run();
		void exit();
		void add();
		void list();
		void remove();
		void update();
		void change_mode();
		std::vector<std::string> tokenize(std::string line, char delimiter);
		std::string get_command_name(std::string full_command);
};