// This program calculates and displays business expenses.
// Name: Buisness planner

#include <iostream>
#include <string>
#include <iomanip>


int main()
 {
   //Delcaring my variables
  double days, hotel, meal;
  float  total;
  std::string location;

  //Finding out the information of the trip
  std::cout << "Welcome to the Buisness Trip Tracker!!!" << '\n' << '\n';

  std::cout << "What is the location of the trip? ",
  getline(std::cin, location);

  std::cout << "How many days will the trip take? ",
  std::cin >> days;

  std::cout << "How much is total hotel expenses? $",
  std::cin >> hotel;

  std::cout << "How much is total food expenses? $",
  std::cin >> meal;
  std::cout << '\n';

  //Calculation the total
  total = meal + hotel;

  //Adding the $ to the costs
  std::string money = "$";
  std::stringstream mealmoney;
  mealmoney << money << std::fixed << std::setprecision(2) << meal;
  std::stringstream hotelmoney;
  hotelmoney << money << std::fixed << std::setprecision(2) << hotel;
  std::stringstream totalmoney;
  totalmoney << money << std::fixed << std::setprecision(2) << total;

  //Displaying all the information
  std::cout << std::setw(21) << "Location" << std::setw(10) << "Days" << std::setw(17) << "Hotel Expenses" << std::setw(17) << "Food Expenses" << std::setw(10) << "Total" << '\n';
  std::cout << std::setw(21) << location.substr(0,20) << std::setw(10) << days << std::setw(17) << hotelmoney.str() << std::setw(17) <<  mealmoney.str() << std::setw(10) <<  totalmoney.str() << '\n';
  return 0;
}
