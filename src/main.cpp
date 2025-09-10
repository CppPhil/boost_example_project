#include <iostream>
#include <sstream>
#include <string>

#include <boost/regex.hpp>

int main()
{
  std::istringstream inputStringStream{R"(To: George Shmidlap
From: Rita Marlowe
Subject: Will Success Spoil Rock Hunter?
---
See subject.)"};
  std::string        line{};
  boost::regex       pattern{"^Subject: (Re: |Aw: )*(.*)"};

  while (inputStringStream) {
    std::getline(inputStringStream, line);
    boost::smatch matches{};

    if (boost::regex_match(line, matches, pattern)) {
      std::cout << matches[2] << '\n';
    }
  }
}
