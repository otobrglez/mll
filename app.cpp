#include <iostream>
#include <string>
// #include <boost/lambda/lambda.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/join.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/cxx11/any_of.hpp>

#include <vector>
#include <iterator>
#include <algorithm>

std::string line_to_token(std::string line){
  std::string delims = "\t";
  std::vector<std::string> tokens;
  boost::split(tokens, line, boost::is_any_of(delims), boost::token_compress_off);
  if(tokens.size() != 1) assert(tokens.size() > 2);
  return tokens.size() == 1 ? "\n" : tokens[1];
}

std::string separator_or_space(std::string token){
  auto charz = {std::string("."), std::string(","), std::string("!")};
  if(boost::algorithm::any_of_equal(charz, token)){
    return "x";
  } else {
    return " ";
  }
}

int main(){
  std::vector<std::string> buffer;
  for(std::string line; getline(std::cin, line);){
    auto token(line_to_token(line));

    if(token == "\n") {
      std::cout << separator_or_space(token) << boost::algorithm::join(buffer, " ");
      std::cout << std::endl;
      buffer.clear();
    } else {
      buffer.push_back(token);
    };
  }
}
