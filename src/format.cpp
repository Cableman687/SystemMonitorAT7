#include <string>
#include<iomanip>
#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
    
    long hours = seconds/3600;
    seconds = seconds%3600;
    long minutes = seconds/60;

    seconds = seconds%60;
    
    

    std::ostringstream timepassed;
    timepassed << std::setw(2) << std::setfill('0') << hours << ":" << std::setw(2) << std::setfill('0') << minutes << ":" << std::setw(2) << std::setfill('0') << seconds;
    
    
    return timepassed.str(); }