#include "stringTools.h"
#include <set>

void stripSpecialCharacters(std::string& s) {
    std::string out;
    const std::set<char> punct = {'"',',','-','.','?','!',';'};
    for (char c : s) {
        if (punct.count(c) == 0)
            out.push_back(c);
    }
    s = out;
}

void lowerCase(std::string& s) {
    for (char& c : s) {
        c = std::tolower(c);
    }
}