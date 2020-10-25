cmake_minimum_required(VERSION 3.17)
project(Phone_Book_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Phone_Book_2 main.cpp PhoneBook.h RecordPhoneBook.h Phone.h Address.h Person.h FIO.h Date.h)