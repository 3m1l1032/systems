/* 
 * Emilio Cazares Borbon, June 2026
 * 
 * Main driver program for the different explorations.
 * 
 * See `main.hpp` for a bit more detail.
 */

#include "main.hpp"

int main (int argc, const char * argv [])
{
    heading ("SYSTEMS");
    std::cout << "Start of exploration!" << std::endl;

    /****************
     *   MESSAGES   *
     ****************/
    heading ("MESSAGES");

    explore_messages ();

    /****************
     *   THE END!   *
     ****************/
    heading ("THE END!");

    return EXIT_SUCCESS;
}

void heading (std::string headingName)
{
    int space = headingName.size ();
    
    std::cout << std::setfill ('*');
    std::cout << "\n\n\n~~~******" << std::setw (space) << "" << "******~~~" << std::endl;
    std::cout << std::setfill (' ');
    std::cout << "~~~***   " << std::setw (space) << "" << "   ***~~~" << std::endl;


    std::cout << "~~~***   " << headingName << "   ***~~~" << std::endl;
    std::cout << "~~~***   " << std::setw (space) << "" << "   ***~~~" << std::endl;
    std::cout << std::setfill ('*');
    std::cout << "~~~******" << std::setw (space) << "" << "******~~~\n\n" << std::endl;

    std::cout << std::setfill(' ');
}