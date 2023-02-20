#include <iostream>
#include <vector>

using namespace std;


class Publication{
private:
    struct Names {
    vector <string> Authors [3];
    };
protected:
    string pubName;
    int pubPrice = 1;
public:
    //vector <string> get_Authors [3] = Authors  - I also could not get this to work without an error despite a lot of research//
    int get_pubPrice = pubPrice;
    string authorOne;
    string authorTwo;
    string authorThree;
    void changeMyPrice(double price) {
    get_pubPrice = price;
    }
    void seePrice() {
    cout << "The price of the publication is: " << get_pubPrice << endl;
    }
    void setAuthors (string first, string last) {
    if (first.length() != 1)
        cout<< "Please try again, please only enter one letter for the initial of the first name, and the full last name. I.E John Smith would be J Smith"<< endl;
    else
        cout << "The name of the author is: " << first << ". " << last << "." << endl;
    }
    void setAuthors (string firstOne, string lastOne, string firstTwo, string lastTwo) {
    if (firstOne.length() != 1)
        cout<< "Please try again, please only enter one letter for the initial of the first name, and the full last name. I.E John Smith would be J Smith"<< endl;
    if (firstTwo.length() != 1)
        cout<< "The first initial of the second author was incorrect. Please try again, please only enter one letter for the initial of the first name, and the full last name. I.E John Smith would be J Smith"<< endl;
    else
        cout << "The name of the author is: " << firstOne << ". " << lastOne << "." << " The name of the second author is: " << firstTwo << ". " << lastTwo << "." << endl;
    }
    void setAuthors (string firstOne, string lastOne, string firstTwo, string lastTwo, string firstThree, string lastThree) {
    if (firstOne.length() != 1)
        cout<< "Please try again, please only enter one letter for the initial of the first name, and the full last name. I.E John Smith would be J Smith"<< endl;
    if (firstTwo.length() != 1)
        cout<< "The first initial of the second author was incorrect. Please try again, please only enter one letter for the initial of the first name, and the full last name. I.E John Smith would be J Smith"<< endl;
    if (firstThree.length() != 1)
        cout<< "The first initial of the third author was incorrect. Please try again, please only enter one letter for the initial of the first name, and the full last name. I.E John Smith would be J Smith"<< endl;
    else
        /*get_Authors [0] = firstOne + lastOne;
        get_Authors [1] = firstTwo + lastTwo;
        get_Authors [2] = firstThree + lastThree;  my attempt to get the vector to work, but I kept getting errors. */
    authorOne = firstOne + lastOne;
    authorTwo = firstTwo + lastTwo;
    authorThree = firstThree + lastThree;
        cout << "The name of the author is: " << firstOne << ". " << lastOne << "." << " The name of the second author is: " << firstTwo << ". " << lastTwo << "." << " The name of the third author is: " << firstThree << ". " << lastThree << "." << endl;
    }
    void listAuthors() {
    cout << authorOne << ", " << authorTwo << ", " << authorThree << ". " << endl;

    }
};

class Book : public Publication {
public:
    string ISBN;
    int pages;
    int pubYear;
    string bookName;
    double bookPrice;
    void setName(string name){
        bookName = name;
    }
    void getName(){
        cout<<"The Name of the book is: " << bookName << endl;
    }
    /*Book(double price){
        bookPrice = price; } I'm not being allowed to declare this constructor? Any advice?*/

};

class Journal : public Publication {
public:
    int ISSN;
    string journalName;
    void setName(string name){
        journalName = name;
    }
    void getName(){
        cout<<"The Name of the book is: " << journalName << endl;
    }
};

class Article : public Journal {
public:
    double articlePrice;
    /*Article(double price) {                       Getting the same error with my constructor here.
    articlePrice = price;
    } */
    int volumeNum;
    int issueNum;
    int pubYear;
    int firstPage;
    int lastPage;
    string articleTitle;
    void citation () {
    cout << authorOne << ", (" << pubYear << ") " << articleTitle << ", " << journalName << ", " << volumeNum << firstPage << " - " << lastPage << "." << endl;

    }

};




int main(){

Publication pub1;

pub1.changeMyPrice(24.00);
pub1.seePrice();

Book HOC;

HOC.authorOne = "Manuel Oliveriara";
HOC.authorTwo = "Julia Roberts";
HOC.ISBN = 9876543210;
HOC.pages = 123;
HOC.pubYear = 1995;
HOC.bookPrice = 12.00;

Article art1;

art1.authorOne = "Joan Rider";
art1.setName("International Journal of Computation");
art1.ISSN = 1234567890;
art1.articleTitle = "A Novel C++ Program";
art1.pubYear = 1996;
art1.volumeNum = 4;
art1.issueNum = 2;
art1.firstPage = 45;
art1.lastPage = 99;
art1.articlePrice = 60;

/*string pubs [20];
pubs [0] = pub1;
pubs [2, 4, 6, 8, 10, 12, 14, 16, 18] = HOC;
pubs [1,3,5,7,9,11,13,15,17,19] = art1;

for (i = 0, i>20, i++)
cout<< pubs << endl; */                                   // Also struggled with the loop - I know how to make a loop, but am struggling with how to print the price of each object within the loop.



cout << art1.articlePrice << endl;




return 0;
}

