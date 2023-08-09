#include <cstdlib>
#include <iostream>
using namespace std;

string o = " ";
    string o2 = " ";
    string o3 = " ";
    string o4 = " ";
    string o5 = " ";
    string o6 = " ";
    string o7 = " ";
    string o8 = " ";
    string o9 = " ";
    int col;
    int row;


int draw() {
cout << " _ _ _\n";
    cout << "|";
    cout << o;
    cout << "|";
    cout << o2;
    cout << "|";
    cout << o3;
    cout << "|\n";
    cout << " - - -\n";
    cout << "|";
    cout << o4;
    cout << "|";
    cout << o5;
    cout << "|";
    cout << o6;
    cout << "|\n";
    cout << " - - -\n";
    cout << "|";
    cout << o7;
    cout << "|";
    cout << o8;
    cout << "|";
    cout << o9;
    cout << "|\n";
    cout << " - - -\n";

}

int check() {
   cout << "Enter column: ";
    cin >> col;
    cout << "Enter row: ";
    cin >> row;
    if (col == 1 && row == 1) {
	   o = "X";
	   draw();
    }
    if (col == 1 && row == 2) {
        o2 = "X";
	   draw();
    }
    if (col == 1 && row == 3) {
	   o3 = "X";
	   draw();
    }
    if (col == 2 && row == 1) {
	   o4 = "X";
	   draw();
    }
    if (col == 2 && row == 2) {
	   o5 = "X";
	   draw();
    }
    if (col == 2 && row == 3) {
	   o6 = "X";
	   draw();
    }
    if (col == 3 && row == 1) {
	   o7 = "X";
	   draw();
    }
    if (col == 3 && row == 2) {
	   o8 = "X";
	   draw();
    }
    if (col == 3 && row == 3) {
	   o9 = "X";
	   draw();
    }
}

int check2() {
   cout << "Enter column: ";
    cin >> col;
    cout << "Enter row: ";
    cin >> row;
    if (col == 1 && row == 1) {
	   o = "O";
	   draw();
    }
    if (col == 1 && row == 2) {
        o2 = "O";
	   draw();
    }
    if (col == 1 && row == 3) {
	   o3 = "O";
	   draw();
    }
    if (col == 2 && row == 1) {
	   o4 = "O";
	   draw();
    }
    if (col == 2 && row == 2) {
	   o5 = "O";
	   draw();
    }
    if (col == 2 && row == 3) {
	   o6 = "O";
	   draw();
    }
    if (col == 3 && row == 1) {
	   o7 = "O";
	   draw();
    }
    if (col == 3 && row == 2) {
	   o8 = "O";
	   draw();
    }
    if (col == 3 && row == 3) {
	   o9 = "O";
	   draw();
    }
}


int main() {
    draw();
    check();
    if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o4 == "O" && o5 == "O" && o6 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o4 == "X" && o5 == "X" && o6 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
  if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }
    check2();
    if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o4 == "O" && o5 == "O" && o6 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }

    if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }

 if (o4 == "X" && o5 == "X" && o6 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    
 if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }

    check();
    if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o4 == "O" && o5 == "O" && o6 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o4 == "X" && o5 == "X" && o6 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }

 if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
  if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }
 
check2();
    if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o4 == "O" && o5 == "O" && o6 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o4 == "X" && o5 == "X" && o6 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }

check();
    if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o4 == "O" && o5 == "O" && o6 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o4 == "X" && o5 == "X" && o6 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }

check2();
    if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o4 == "O" && o5 == "O" && o6 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o4 == "X" && o5 == "X" && o6 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
   if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }

check();
    if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o4 == "O" && o5 == "O" && o6 == "O") {
	cout << "You Win!\n";
 }
 if (o4 == "X" && o5 == "X" && o6 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
  if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }

check2();
    if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o4 == "O" && o5 == "O" && o6 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o4 == "X" && o5 == "X" && o6 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
   if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
   if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }

check();
    if (o == "X" && o2 == "X" && o3 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o2 == "O" && o3 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o4 == "O" && o5 == "O" && o6 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o4 == "X" && o5 == "X" && o6 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o7 == "O" && o8 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o7 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
   if (o == "X" && o4 == "X" && o7 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
     if (o == "O" && o4 == "O" && o7 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o2 == "O" && o5 == "O" && o8 == "O") {
	   cout << "You Win!\n";
	   exit(0);
    }
 if (o2 == "X" && o5 == "X" && o8 == "X") {
	   cout << "You Win!\n";
	   exit(0);
    }
    if (o3 == "O" && o6 == "O" && o9 == "O") {
        cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o8 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 }
if (o == "X" && o5 == "X" && o9 == "X") {
	   cout << "You Win!\n";
	   exit(0);
 } 
 if (o == "O" && o5 == "O" && o9 == "O") {
	   cout << "You Win!\n";
	   exit(0);
 }
 if (o3 == "X" && o5 == "X" && o7 == "X") {
	cout << "You Win!\n";
	exit(0);
 }
 if (o3 == "O" && o5 == "O" && o7 == "O") {
	cout << "You Win!\n";
	exit(0);
 }

 if (o == "X" or o == "O" && o2 == "X" or o2 == "O" && o3 == "X" or o3 == "O" && o4 == "X" or o4 == "O" && o5 == "X" or o5 == "O" && o6 == "X" or o6 == "O" && o7 == "X" or o7 == "O" && o8 == "X" or o8 == "O" && o9 == "X" or o9 == "O") {
    cout << "Draw!\n";
 }
}
