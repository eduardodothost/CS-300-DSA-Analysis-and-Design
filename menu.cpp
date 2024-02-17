#include "menu.hpp"
#include "course.hpp"
using namespace Menu;

course course_chart;

bool Menu::prompt(bool update) {
  
  std::string response;
  std::string query;
  std::cout << "Welcome to the course planner." << std::endl
            << "1. Load Data Structure." << std::endl
            << "2. Print Course List." << std::endl
            << "3. Print Course." << std::endl
            << "9. Exit" << std::endl;
  std::cout << "What would you like to do? " << std::endl;
  std::cin >> response;
  if (response.compare("9") == 0) {
    update = false;
  } else if (response.compare("1") == 0) {
    course_chart.load();

  } else if (response.compare("2") == 0) {
    course_chart.list();

  
  } else if (response.compare("3") == 0) {
    std::cout << std::endl << "What course do you want to know about? ";
    std::cin >> query;
    course_chart.search(query);
  }
  return update;
}

void Menu::start() {
  bool state = true;
  while (state) {
    state = prompt(state);
  }
}