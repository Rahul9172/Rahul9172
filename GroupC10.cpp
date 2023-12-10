 #include <iostream>
 using namespace std;

 // Node Structure for each Appointment
 struct Appointment {
     int start, end, min, max, flag;
     Appointment* next;
 };

 // Appointment Schedule Class
 class AppointmentSchedule {
 private:
     Appointment* head;
     int size;

 public:
     // Constructor
     AppointmentSchedule() : head(nullptr), size(0) {}

     // Function to create Appointment Schedule
     void createSchedule() {
         cout << "\nHow many Appointment Slots: ";
         cin >> size;

         for (int i = 0; i < size; i++) {
             Appointment* temp = new Appointment;

             cout << "\nEnter Start Time: ";
             cin >> temp->start;
             cout << "Enter End Time: ";
             cin >> temp->end;
             cout << "Enter Minimum Duration: ";
             cin >> temp->min;
             cout << "Enter Maximum Duration: ";
             cin >> temp->max;

             temp->flag = 0;
             temp->next = nullptr;

             if (!head) {
                 head = temp;
             } else {
                 Appointment* last = head;
                 while (last->next) {
                     last = last->next;
                 }
                 last->next = temp;
             }
         }
     }

     // Function to display Appointment Schedule
     void displaySchedule() {
         cout << "\nAppointment Schedule:\n";
         Appointment* temp = head;
         int count = 1;

         while (temp) {
             cout << count << ". Start: " << temp->start << ", End: " << temp->end
                  << ", Min Duration: " << temp->min << ", Max Duration: " << temp->max;

             if (temp->flag) {
                 cout << " - Booked\n";
             } else {
                 cout << " - Free\n";
             }

             temp = temp->next;
             count++;
         }
     }

     // Other functions (book, cancel, sort) can be simplified similarly
 };

 int main() {
     AppointmentSchedule schedule;

     char choice;
     do {
         cout << "\n\n*** Menu ***";
         cout << "\n1. Create Appointment Schedule";
         cout << "\n2. Display Free Slots";
         cout << "\n3. Book an Appointment";
         cout << "\n4. Cancel an Appointment";
         cout << "\n5. Sort slots based on Time";

         cout << "\n\nEnter your choice: ";
         cin >> choice;

         switch (choice) {
             case '1':
                 schedule.createSchedule();
                 break;
             case '2':
                 schedule.displaySchedule();
                 break;
             // Implement other cases for booking, canceling, sorting
             default:
                 cout << "\nWrong choice!";
         }

         cout << "\nDo you want to continue? (y/n): ";
         cin >> choice;
     } while (choice == 'y');

 return(0);
 }