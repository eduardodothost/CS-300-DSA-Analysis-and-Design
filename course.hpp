#pragma once
#include <string>
#ifndef _COURSE_HPP_
#define _COURSE_HPP_
class course {
public:
  course();
  void load();
  void list();
  void search(std::string query);
  bool C100b = false;
  bool C101b = false;
  bool C200b = false;
  bool C300b = false;
  bool C301b = false;
  bool C350b = false;
  bool C400b = false;
  bool M201b = false;
  std::string C100s;
  std::string C101s;
  std::string C200s;
  std::string C300s;
  std::string C301s;
  std::string C350s;
  std::string C400s;
  std::string M201s;
};
#endif