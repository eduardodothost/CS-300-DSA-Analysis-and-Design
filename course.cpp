#include "course.hpp"
#include <fstream>
#include <iostream>

// This is a class that represents courses present on the file
course::course(){};

std::string filename{"ABCU_Advising_Program_Input.txt"};

// load file content into a graph
void course::load() {
  std::fstream sink;
  sink.open(filename, std::ios::in);
  if (!sink.is_open())
    std::cout << "failed to open " << filename << '\n';
  else {
    std::string stream;
    while (getline(sink, stream)) {
      // Print the data of the string.
      if (stream.compare("CSCI100,Introduction to Computer Science") == 0) {
        this->C100s = stream;
        this->C100b = true;
      } else if (stream.compare(
                     "CSCI101,Introduction to Programming in C++,CSCI100") ==
                 0) {
        this->C101s = stream;
        C101b = true;
      } else if (stream.compare("CSCI200,Data Structures,CSCI101") == 0) {
        C200s = stream;
        C200b = true;
      } else if (stream.compare(
                     "CSCI301,Advanced Programming in C++,CSCI101") == 0) {
        C301s = stream;
        C301b = true;
      } else if (stream.compare(
                     "CSCI300,Introduction to Algorithms,CSCI200,MATH201") ==
                 0) {
        C300s = stream;
        C300b = true;
      } else if (stream.compare("CSCI350,Operating Systems,CSCI300") == 0) {
        C350s = stream;
        C350b = true;
      } else if (stream.compare(
                     "CSCI400,Large Software Development,CSCI301,CSCI350") ==
                 0) {
        C400s = stream;
        C400b = true;
      } else if (stream.compare("MATH201,Discrete Mathematics") == 0) {
        M201s = stream;
        M201b = true;
      }
    }
  }
}

void course::list() {

  if (C100b == true) {
    std::cout << std::endl
              << "CSCI100, Introduction to Computer Science" << std::endl;
  }

  if (C101b == true) {
    if (C100b == false) {
      std::cout << std::endl
                << "[Warning]CSCI100 needed before taking CSCI101" << std::endl;
    } else {
      std::cout << std::endl
                << "CSCI101, Introduction to Programming in C++" << std::endl;
    }
  }

  if (C200b == true) {
    if (C101b == false) {
      std::cout << std::endl
                << "[Warning]CSCI101 needed before taking CSCI200" << std::endl;
    } else {
      std::cout << std::endl << "CSCI200, Data Structures" << std::endl;
    }
  }

  if (C301b == true) {
    if (C101b == false) {
      std::cout << std::endl
                << "[Warning]CSCI101 needed before taking CSCI301" << std::endl;
    } else {
      std::cout << std::endl
                << "CSCI301, Advanced Programming in C++" << std::endl;
    }
  }

  if (C300b == true) {
    if (C200b == false && M201b == false) {
      std::cout << std::endl
                << "[Warning]CSCI200 and MATH201 needed before taking CSCI101"
                << std::endl;
    } else if (C200b == true && M201b == false) {
      std::cout << std::endl
                << "[Warning]MATH201 needed before taking CSCI101" << std::endl;
    } else if (C200b == false && M201b == true) {
      std::cout << std::endl
                << "[Warning]CSCI200 needed before taking CSCI101" << std::endl;
    } else {
      std::cout << std::endl
                << "CSCI300, Introduction to Algorithms" << std::endl;
    }
  }

  if (C350b == true) {
    if (C300b == false) {
      std::cout << std::endl
                << "[Warning]CSCI300 needed before taking CSCI350" << std::endl;
    } else {
      std::cout << std::endl << "CSCI350, Operating Systems" << std::endl;
    }
  }

  if (C400b == true) {
    if (C301b == false && C350b == false) {
      std::cout << std::endl
                << "[Warning]CSCI301 and CSCI350 needed before taking CSCI400"
                << std::endl;
    } else if (C301b == true && C350b == false) {
      std::cout << std::endl
                << "[Warning]CSCI350 needed before taking CSCI400" << std::endl;
    } else if (C301b == false && C350b == true) {
      std::cout << std::endl
                << "[Warning]CSCI301 needed before taking CSCI400" << std::endl;
    } else {
      std::cout << std::endl
                << "CSCI400, Large Software Development" << std::endl;
    }
  }

  if (M201b == true) {
    std::cout << std::endl << "MATH201, Discrete Mathematics" << std::endl;
  }

  std::cout << std::endl << std::endl;
}

void course::search(std::string stream) {
  if (stream.compare("CSCI100") == 0 || stream.compare("csci100") == 0) {
    std::cout << "CSCI100, Introduction to Computer Science" << std::endl;
    std::cout << "Prerequsites: None" << std::endl << std::endl;
  } else if (stream.compare("CSCI101") == 0 || stream.compare("csci101") == 0) {
    std::cout << "CSCI101, Introduction to Programming in C++" << std::endl;
    std::cout << "Prerequsites: CSCI100" << std::endl << std::endl;
  } else if (stream.compare("CSCI200") == 0 || stream.compare("csci200") == 0) {
    std::cout << "CSCI200, Data Structures" << std::endl;
    std::cout << "Prerequsites: CSCI101" << std::endl << std::endl;
  } else if (stream.compare("CSCI301") == 0 || stream.compare("csci301") == 0) {
    std::cout << "CSCI301, Advanced Programming in C++" << std::endl;
    std::cout << "Prerequsites: CSCI101" << std::endl << std::endl;
  } else if (stream.compare("CSCI300") == 0 || stream.compare("csci300") == 0) {
    std::cout << "CSCI300, Introduction to Algorithms" << std::endl;
    std::cout << "Prerequsites: CSCI200,MATH201" << std::endl << std::endl;
  } else if (stream.compare("CSCI350") == 0 || stream.compare("csci350") == 0) {
    std::cout << "CSCI350, Operating Systems" << std::endl;
    std::cout << "Prerequsites: CSCI300" << std::endl << std::endl;
  } else if (stream.compare("CSCI400") == 0 || stream.compare("csci400") == 0) {
    std::cout << "CSCI400, Large Software Development" << std::endl;
    std::cout << "Prerequsites: CSCI301,CSCI350" << std::endl << std::endl;
  } else if (stream.compare("MATH201") == 0 || stream.compare("math201") == 0) {
    std::cout << "MATH201, Discrete Mathematics" << std::endl;
    std::cout << "Prerequsites: None" << std::endl << std::endl;
  }
}