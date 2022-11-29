//
//  main.cpp
//  проверочная работа С++
//
//  Created by Павел on 24.11.2022.
//
#include "Structs.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

int main(int argc, const char * argv[]) {
    
    int row = 3;
    //book*info=new book[row]; в Xcode такой вариант создания массива  после запуска выдает ошибку
    book info[row];
    std::string file = "info.txt";
    for(int i=0; i < row; i++){
        std::cout<<"ВВедите информацию о книге № "<<i+1<<" : \n";
        std::cout<<"ВВедите название книги :\n";
        std::cin>>info[i].Name_of_book;
        std::cout<<"ВВедите имя автора книги :\n";
        std::cin>>info[i].surname_name.name;
        std::cout<<"ВВедите фамилию автора книги :\n";
        std::cin>>info[i].surname_name.surname;
        std::cout<<"ВВедите год издания :\n";
        std::cin>>info[i].Year;
        std::cout<<"ВВедите количество страниц :\n";
        std::cin>>info[i].Num;
        std::cout<<"ВВедите цену за экземпляр :\n";
        std::cin>>info[i].Price;
        std::cout<<std::endl;
    }
    
    int x,y=0;
    
    
    do {
   std:: cout<<"Уважаемые господа! Введите номер команды ( 1-показать книги;2- показать имя авторов; 3- сохранить данные  в файл; 4 - добавить новую книгу; 5-очистить данные; 6-ЗАВЕРШЕНИЕ РАБОТЫ ) -> \n";
    std::cin>>x;
    switch (x) {
        case 1:show_book(info,  row );
            break;
           
        case 2:author_name(info, row);
            break;
                    
        case 3:save_book(info, row, file);
            break;
                
        case 4:add_book(info, row);
            break;
            
        //case 5:clear_arr(info, row); // не работает на XCode
         //   break;
       
        case 6: std::cout<<"Работа завершена ";
            exit(0);
            break;
            
            
            
        default:
            break;
    }
}
    while(y!=5 );
    

    return 0;
}
