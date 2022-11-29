//
//  Structs.cpp
//  проверочная работа С++
//
//  Created by Павел on 24.11.2022.
//

#include "Structs.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

int i,j;

void show_book(book info[],    int &row){
    
    

    for(i=0; i < row; i++){
        std::cout<<"\nИнформация о книге № "<<i+1<<" : \n";
        std::cout<<"Название книги :"<<info[i].Name_of_book<<std::endl;
        std::cout<<"Автор книги, имя :"<<info[i].surname_name.name<<std::endl;
        std::cout<<"Автор книги, фамиля :"<<info[i].surname_name.surname<<std::endl;
        std::cout<<"Год издания :"<<info[i].Year<<std::endl;
        std::cout<<"Количество страниц :"<<info[i].Num<<std::endl;
        std::cout<<"Цена за экземпляр :"<<info[i].Price<<std::endl;
        std::cout<<std::endl;
    }
  
}

void author_name(book info[], int &row){
    for(i=0; i < row; i++){
        std::cout<<"\nИнформация о книге № "<<i+1<<" : \n";
        std::cout<<"Автор книги, имя :"<<info[i].surname_name.name<<std::endl;
    }
    std::cout<<std::endl;
    
}

void save_book(book info[],  int &row, std::string file){
   
    std::ofstream fs;
    fs.open(file, std::ios::out);
    if(!fs.is_open()){
        std::cout<<"Файл не удалось открыть";
    }else
    {
        std::cout<<"Файл info.txt открыт\n";
    }
    for(i=0; i < row; i++){
        
        fs<<info[i].Name_of_book<<std::endl;
        fs<<info[i].surname_name.name<<std::endl;
        fs<<info[i].surname_name.surname<<std::endl;
        fs<<info[i].Year<<std::endl;
        fs<<info[i].Num<<std::endl;
        fs<<info[i].Price<<std::endl;
        fs<<"  ";
    }
    fs.close();
    std::cout<<"Данные записаны в файл\n\n";
    
}

void add_book(book info[],  int &row){
    const int row1 =4;
    
    //book*tmp=new book[row]; в Xcode такой вариант создания массива  после запуска выдает ошибку
    
    book tmp [row1];//создаем новый массив
    
    for(int i=0; i<row;i++){
        tmp[i].Name_of_book = info[i].Name_of_book;
        tmp[i].surname_name.name=info[i].surname_name.name;
        tmp[i].surname_name.surname=info[i].surname_name.surname;
        tmp[i].Year= info[i].Year;
        tmp[i].Num=info[i].Num;
        tmp[i].Price= info[i].Price;
        }

    
    for(j=3;j<4;j++){
    std::cout<<"ВВедите информацию о книге № "<<j+1<<" : \n";
    std::cout<<"ВВедите название книги :\n";
    std::cin>>tmp[j].Name_of_book;
    std::cout<<"ВВедите имя автора книги :\n";
    std::cin>>tmp[j].surname_name.name;
    std::cout<<"ВВедите фамилию автора книги :\n";
    std::cin>>tmp[j].surname_name.surname;
    std::cout<<"ВВедите год издания :\n";
    std::cin>>tmp[j].Year;
    std::cout<<"ВВедите количество страниц :\n";
    std::cin>>tmp[j].Num;
    std::cout<<"ВВедите цену за экземпляр :\n";
    std::cin>>tmp[j].Price;
    std::cout<<std::endl;
    }
    
    std::cout<<"Вывод обновленной информации о всех книгах :\n\n";
    for(int i=0; i < row1; i++){
        std::cout<<"\nИнформация о книге № "<<i+1<<" : \n";
        std::cout<<"Название книги :"<<tmp[i].Name_of_book<<std::endl;
        std::cout<<"Автор книги, имя :"<<tmp[i].surname_name.name<<std::endl;
        std::cout<<"Автор книги, фамиля :"<<tmp[i].surname_name.surname<<std::endl;
        std::cout<<"Год издания :"<<tmp[i].Year<<std::endl;
        std::cout<<"Количество страниц :"<<tmp[i].Num<<std::endl;
        std::cout<<"Цена за экземпляр :"<<tmp[i].Price<<std::endl;
        std::cout<<std::endl;
    }
    
   
    std::ofstream fs;
    fs.open("info.txt", std::ios_base::out);
    if(!fs.is_open()){
        std::cout<<"Файл не удалось открыть";
    }else
    {
        std::cout<<"Файл info.txt открыт\n";
    }
    for(int i=0; i < row1; i++){
        fs<<tmp[i].Name_of_book<<std::endl;
        fs<<tmp[i].surname_name.name<<std::endl;
        fs<<tmp[i].surname_name.surname<<std::endl;
        fs<<tmp[i].Year<<std::endl;
        fs<<tmp[i].Num<<std::endl;
        fs<<tmp[i].Price<<std::endl;
        fs<<"  ";
    }
    fs.close();
    std::cout<<"Новые данные записаны в файл\n\n";

   // delete [] tmp;   // XCode выдает ошибку: не удается удалить выражение типа "book"
    
}

void  clear_arr(book info,  int &row){
   
  //  delete [] info;   // XCode ошибку: не удается удалить выражение типа "book"
     
}


