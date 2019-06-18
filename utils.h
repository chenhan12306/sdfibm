#ifndef UTILS_H
#define UTILS_H

#include "types.h"

namespace AsciiColors{
    static const std::string COLOR_NORMAL ="\033[0m";
    static const std::string COLOR_RED    ="\033[0;31;49m";
    static const std::string COLOR_GREEN  ="\033[0;32;49m";
    static const std::string COLOR_YELLOW ="\033[0;33;49m";
    static const std::string COLOR_BLUE   ="\033[0;34;49m";
    static const std::string COLOR_MAGENTA="\033[0;35;49m";
    static const std::string COLOR_CYAN   ="\033[0;36;49m";
    static const std::string COLOR_WHITE  ="\033[0;37;49m";
    static const std::string COLOR_INFO   ="\033[0;32;49m";
    static const std::string COLOR_WARNING="\033[4;33;49m";
    static const std::string COLOR_ERROR  ="\033[1;31;43m";
}


inline void PrintInfo(const std::string& message)
{
    std::cout << AsciiColors::COLOR_INFO << message << AsciiColors::COLOR_NORMAL << std::endl;
}
inline void PrintWarning(const std::string& message)
{
    std::cout << AsciiColors::COLOR_WARNING << message << AsciiColors::COLOR_NORMAL << std::endl;
}
inline void PrintError(const std::string& message)
{
    std::cout << AsciiColors::COLOR_ERROR << message << AsciiColors::COLOR_NORMAL << std::endl;
}

inline void Quit(const std::string& msg)
{
    std::cout << msg << std::endl;
    std::exit(1);
}

#endif