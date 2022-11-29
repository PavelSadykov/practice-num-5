//
//  Structs.hpp
//  проверочная работа С++
//
//  Created by Павел on 24.11.2022.
//

#ifndef Structs_hpp
#define Structs_hpp
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>

struct Author{
   std:: string name;
   std:: string surname;
};

struct book{
  
    std::string Name_of_book;
    Author surname_name;
    int Year;
    int Num;
    double Price;
    
};

void show_book(book info[],  int &row);
void author_name(book info[],  int &row);
void save_book(book info[],  int &row, std::string file);
void add_book(book info[], int &row);
void  clear_arr(book info,  int &row);

#endif /* Structs_hpp */
