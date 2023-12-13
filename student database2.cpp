#include <iostream>
 #include <cstring>
 using namespace std;
 class Student {
     static int count;
     int roll;
     char name[18];

 public:
     Student(){
         roll=1;
         strcpy(name, "Abed");
         count++;
     }

     Student(const Student& s) {
         roll=s.roll;
         strcpy(name, s.name);
         count++;
     }

     ~Student() {
         count--;
     }

     void getData() {
         cout << "\nEnter the roll num: ";
         cin >> roll;
         cout << "\nEnter the name: ";
         cin >> name;
     }

     void display() {
         cout << "\nThe roll num is " << roll;
         cout << "\nThe name is " << name;
     }

     static void showCount() {
         cout << "\nCount is: " << count;
     }
 };

 int Student::count = 0;

 int main() {
     Student* s1 = new Student;
     Student s2(*s1);
     int n;

     cout << "\nEnter the number of students: ";
     cin >> n;

     Student* s[10];

     for (int i = 0; i < n; i++) {
         s[i] = new Student;
         s[i]->getData();
     }

     for (int i = 0; i < n; i++) {
         s[i]->display();
     }

     s1->display();
     s2.display();

     Student::showCount();

     for (int i = 0; i < n; i++) {
         delete s[i];
     }

     delete s1;
     Student::showCount();

 return(0);
 }