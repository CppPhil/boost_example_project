#include <boost/regex.hpp>
#include <iostream>
#include <sstream>
#include <string>

int main()
{
  std::istringstream iss(R"(To: George Shmidlap
From: Rita Marlowe
Subject: Will Success Spoil Rock Hunter?
---
See subject.)");
  std::string        line;
  boost::regex       pat("^Subject: (Re: |Aw: )*(.*)");

  while (iss) {
    std::getline(iss, line);
    boost::smatch matches;
    if (boost::regex_match(line, matches, pat))
      std::cout << matches[2] << std::endl;
  }
}
