#pragma once

#include <iostream>
#include <string.h>
#include <vector>

namespace{
  const std::string base64_chars_ = 
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             "abcdefghijklmnopqrstuvwxyz"
             "0123456789+/";
}

class Decode{
public:
  std::string base64_Decode(std::string const& encoded_string_);

private:
  unsigned char char_array_4[4], char_array_3[3];
  static inline bool is_base64(unsigned char c) {
  return (isalnum(c) || (c == '+') || (c == '/'));
}
};
