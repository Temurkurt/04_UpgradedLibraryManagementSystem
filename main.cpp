#include <iostream>
#include <map>

using namespace std;

class Books {

public:
    string title;
    string author;
    int pages;
    int rating;

private:
    void addBook() {
        cout << "Book added" << endl;
    }
    void removeBook() {
        cout << "Book removed" << endl;
    }
    void updateBook() {
        cout << "Book updated" << endl;
    }
    void searchBook() {
    }

};
map <string, int> books;

int main() {


}
