#include <iostream>

int calculator()
{
   int numberone{ 0 };
   int numbertwo{ 0 };
   std::cout << "\nhere is a calculator";
   std::cout << "\n it only does multiplication\n";
   std::cout << "enter two numbers : ";
   std::cin >> numberone;
   std::cout << "\n";
   std::cin >> numbertwo;
   int john{numberone * numbertwo};
   std::cout << std::endl << "those numbers multiplide is: " << john;
   return 0;
}

int main()
{
   std::cout << "hi this is a quiz\n";
   int anwserone{};
   std::cout << "ok the first question of this quiz is this:\n what is  your favorite number? (dont enter a letter because it glitches the program):     ";
   std::cin >> anwserone;
   int anwserthree{};
   std::cout << "\n what is your least favorite number?:  ";
   std::cin >> anwserthree;
   int anwsertwo{};
   std::cout << "\nthe last question is: what is your date of birth?  :   ";
   std::cin >> anwsertwo;
   std::cout << "\nwell that was interesting\n";
   std::cout << "heres your results: ";
   std::cout << "your anwsered " << anwserone << " for the first question." << std::endl;
   std::cout << "you anwsered " << anwserthree << " for the second question." << std::endl;
   std::cout << "and you anwsered " << anwsertwo << " for the last question.\n";
   int joe{anwsertwo + anwserthree + anwserone};
   std::cout << " all your numbers combined is : " << joe;
   int me{2021 - anwsertwo};
   std::cout << "also, you are " << me << " years old.";
   std::cout << std::endl << "\n \ni made a calculator";
   calculator();
   std::cout << "well thats it";
   return 0;
}