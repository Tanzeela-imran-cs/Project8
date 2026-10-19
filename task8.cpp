#include <iostream>
using namespace std;
class book {
private :
	string title;
	string author;
	int copies;
	char available;
public:
	void settitle(string t) {
		title = t; }
	void setauthor(string a) {
		author = a;
	}
	void setcopies(int c) {
		copies = c;
	}
	void setavailable(char v) {
		available = v;
	}
	string gettitle() { return title; }
	string getauthor() { return author; }
	int getcopies() { return copies; }
	char getavailable() { return available; }
	void dispaly(string w, string x, int y, char z) {
		title = w; author = x; copies = y, available = z;
	}
	void choice() {
		int option;
		cout << "if you want to dispaly enter 1,and if you want to issue enter 2 ,and if you want to return enter 3 " << endl;
		cin >> option;
		if (option == 1) {
			cout << "put your book" << endl;
		}
		else if (option == 2) {
			if (copies > 0) {
				copies--;
				cout << "Book issued. Copies left: " << copies << endl;
			}
			else {
				cout << "No copies available." << endl;
			}
			
			cout << " your title"<<  title << " a author"  << author <<"avaiable copies are:" <<copies <<"book availailbilty is:"<< available << endl;
		}
		else if (option == 3) {
			copies++;
			cout << "Book returned. Copies now: " << copies << endl;
		}
		else {
			cout << "invalid choice";
	}
}
};
int main() {
	book b1;
	 b1.settitle("c++");
	b1.setauthor("maria");
	b1.setcopies(4);
	b1.setavailable('y');
	b1.choice();
	return 0;
}