#include <iostream>  
using namespace std;
class Books
{
public:
   int book_id;
   string book_name;
   float book_price;

   void display()
    { 
        cout << "Book ID: " << book_id << endl; 
        cout << "Book Name: " << book_name << endl;
        cout << "Book Price: " << book_price;
    }
};
int main()
{
    cout <<"=====BOOK LIBRARY SYSTEM=====" << endl;
    Books b1;
  
    b1.book_id = 234;
    b1.book_name = "OOP book";
    b1.book_price = 267.50;
    b1.display();
    return 0;
}
