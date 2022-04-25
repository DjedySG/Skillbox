// Task_32_5_1.cpp: определяет точку входа для приложения.
//

#include "Task_32_5_1.h"
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main()
{
	json film_one = {
		{"Name", "Kickboxer"},
		{"Country", "USA"},
		{"year", 1989},
		{"Studio", "Kings Road Entertaiment"},
		{"Scenario", "Glenn Brus"},
		{"Directed by", "Mark Dissale"},
		{"Produced by", "Mark Dissale" },
		{"Main Actor", "Jan Clod Van Damm"},
	};
	std::ofstream file("record.json");
	file << film_one;
	file.close();
	return 0;
}
