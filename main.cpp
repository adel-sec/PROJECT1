#include <iostream>
using namespace std;
 const	string bold ="\033[2m";
 const	string red ="\033[0;31m";
 const	string black ="\033[0;30m";
 const	string green ="\033[0;32m";
 const	string yellow ="\033[1m";
 const	string blue ="\033[0;34m";
 const  string clear="\033[2J\033[1;1H";
int main(){
	int patient_count = 0;
int choice =0;
string sure; 
  //اكرم
string departments[5] = {"Emergency", "Internal Medicine", "Pediatrics", "Surgery", "Dental"};
    int doctor_count = 5;
    string doctor_name[10] = {"Dr. Ali", "Dr. Sarah","Dr.Khaled","Dr.omer","Mona"};
    string doctor_department[10] = {"Surgery", "Pediatrics","Emergency","Internal Medicine","Dental"};
    int doctor_working_hours[10] = {8, 6,12,7,5};
    int doctor_ID[10] = {101, 102, 103, 104, 105,};
	 
	
	//مصطفئ
int patient_ID[10];
string patient_name[10];
int patient_age[10];
int patient_data[10][4];
float patient_temperture[10];
string patient_department[10];
int patient_pressure[10];
string blood_type[10];
	do{
  
	cout << green+"===========================\n"+bold;
	cout << blue+"       the ststem of the hostptil"+bold<<endl;
	cout << green+"===========================\n"+bold;
    cout << yellow+" 1)  patient management  \n";
    cout << yellow+" 2)  doctor management  \n";
    cout << yellow+" 3)  appintments  \n ";
    cout << yellow+" 4)  medical departments  \n";
    cout << yellow+" 5)  hostptil statistics \n";
    cout << yellow+" 6)  search  \n";
    cout << yellow+" 7)  report  \n";
    cout << yellow+" 8)  exit \n";
    cout << red+bold +"type ur choice : ";
    cin >> choice ;
    if (cin.fail()) {
    cout << clear;
    cout<<bold+red+" wrong input \n type again\n";     
    cin.clear();    
    cin.ignore(100, '\n');
     break;
    }
    if (choice == 1 ||choice == 2 ||choice == 3 ||choice == 4 ||choice == 5 ||choice == 6 ||choice == 7||choice == 8){
    switch(choice){
    
    	case 1:
    	do{
    	   choice =0;
    	   cout << clear;
    	   cout <<bold+green+"===========================\n";
           cout <<bold+red+green+"patient management menue";
    	   cout <<bold+green+"\n===========================\n";
           cout <<bold+blue+" 1) to add paient\n";
           cout <<bold+blue+" 2) to show all patient\n";
           cout <<bold+blue+" 3) to srearch on patient\n";
           cout <<bold+blue+" 4) to chick on patient \n";
           cout <<bold+red+" type in ur choice : ";
           cin >> choice;
        
           if (cin.fail()) {
           cout << clear;
           cout<<bold+red+" wrong input \n type again\n";
           cin.clear();
           cin.ignore(100, '\n');}
           switch(choice){
           	
                case 1: {
    cout << clear;
    if (patient_count >= 10) {
        cout << bold + red + "Hospital is full! Cannot add more patients.\n";
    } else {
        cout << bold + green + "=== Add New Patient ===\n" + bold;
        cout << "Enter Patient ID: ";
        cin >> patient_ID[patient_count];
        
        cout << "Enter Patient Name: ";
        cin >> patient_name[patient_count];
        
        cout << "Enter Patient Age: ";
        cin >> patient_age[patient_count];
        
        cout << "Enter Temperature: ";
        cin >> patient_temperture[patient_count];
        
        cout << "Enter Blood Pressure: ";
        cin >> patient_pressure[patient_count];
        
        cout << "Enter Department (Emergency/Internal/Pediatrics/Surgery/Dental): ";
        cin >> patient_department[patient_count];

        // تعبئة البيانات في المصفوفة ثنائية الأبعاد 2D Array
        patient_data[patient_count][0] = patient_age[patient_count];
        patient_data[patient_count][1] = (int)patient_temperture[patient_count];
        patient_data[patient_count][2] = (int)patient_pressure[patient_count];
        patient_data[patient_count][3] = 75; // قيمة النبض Pulse الافتراضية

        patient_count++;
        cout << bold + green + "\nPatient added successfully!\n";
    }
    cout << "\nPress Enter to continue...";
    cin.ignore(100, '\n');
    cin.get();
    break;
}
           	break;
           	
              case 2: {
    cout << clear;
    if (patient_count == 0) {
        cout << bold + red + "No patients found!\n";
    } else {
        cout << bold + green + "=== All Patients List ===\n" + bold;
        for (int i = 0; i < patient_count; i++) {
            cout << "ID: " << patient_ID[i] 
                 << " | Name: " << patient_name[i] 
                 << " | Age: " << patient_age[i] 
                 << " | Temp: " << patient_temperture[i] 
                 << " | BP: " << patient_pressure[i] 
                 << " | Dept: " << patient_department[i] << "\n";
        }

        // عرض بيانات المصفوفة ثنائية الأبعاد باستخدام Nested loops (حلقات متداخلة)
        cout << bold + yellow + "\n--- Detailed Matrix Data (Age, Temp, BP, Pulse) ---\n" + bold;
        for (int i = 0; i < patient_count; i++) {
            cout << "Patient " << (i + 1) << ": ";
            for (int j = 0; j < 4; j++) {
                cout << patient_data[i][j] << " \t";
            }
            cout << "\n";
        }
    }
    cout << "\nPress Enter to continue...";
    cin.ignore(100, '\n');
    cin.get();
    break;
}     

           	break;



           	
             case 3: {
    cout << clear;
    if (patient_count == 0) {
        cout << bold + red + "No patients in system!\n";
    } else {
        int search_id;
        bool found = false;
        cout << bold + green + "=== Search Patient ===\n" + bold;
        cout << "Enter Patient ID to search: ";
        cin >> search_id;

        for (int i = 0; i < patient_count; i++) {
            if (patient_ID[i] == search_id) {
                cout << bold + green + "\nPatient Found:\n" + bold;
                cout << "ID: " << patient_ID[i] << "\n";
                cout << "Name: " << patient_name[i] << "\n";
                cout << "Age: " << patient_age[i] << "\n";
                cout << "Temp: " << patient_temperture[i] << "\n";
                cout << "BP: " << patient_pressure[i] << "\n";
                cout << "Department: " << patient_department[i] << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << bold + red + "Patient with ID " << search_id << " not found!\n";
        }
    }
    cout << "\nPress Enter to continue...";
    cin.ignore(100, '\n');
    cin.get();
    break;
}

           	break;
            
            case 4: {
    cout << clear;
    if (patient_count == 0) {
        cout << bold + red + "No patients in system!\n";
    } else {
        int check_id;
        bool found = false;
        cout << bold + green + "=== Check Patient Status ===\n" + bold;
        cout << "Enter Patient ID to check status: ";
        cin >> check_id;

        for (int i = 0; i < patient_count; i++) {
            if (patient_ID[i] == check_id) {
                found = true;
                cout << "\nPatient Name: " << patient_name[i] << "\n";
                cout << "Temperature: " << patient_temperture[i] << "\n";
                cout << "Status: ";

                // تحديد الحالة باستخدام الشروط المطلوبة في دليل المكلف
                if (patient_temperture[i] >= 39.0) {
                    cout << bold + red + "Emergency\n";
                } else if (patient_temperture[i] >= 37.5) {
                    cout << bold + yellow + "Needs Attention\n";
                } else {
                    cout << bold + green + "Normal\n";
                }
                break;
            }
        }
        if (!found) {
            cout << bold + red + "Patient with ID " << check_id << " not found!\n";
        }
    }
    cout << "\nPress Enter to continue...";
    cin.ignore(100, '\n');
    cin.get();
    break;
}


            break;
           
           }
           }while(true);          
    	break;
    	case 2:
			int doctor_choice;
    	 do {
        cout << "\n--- Doctor Management System ---\n";
        cout << "1. Add New Doctor\n";
        cout << "2. Display All Doctors\n";
        cout << "3. Search Doctor by ID\n";
        cout << "4. Display Doctors by Department\n";
        cout<<  "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> doctor_choice;
        if (doctor_choice < 1 || doctor_choice > 5) {
            cout << "Invalid choice! Please enter a number between 1 and 5.\n";
        }
    }
    while(doctor_choice < 1 || doctor_choice > 5);

			
    switch (doctor_choice) {
        case 1: {
            if (doctor_count < 10) {
                cout << "\n--- Add New Doctor ---\n";

                cout << "Enter Doctor ID: ";
                cin >> doctor_ID[doctor_count];

                cout << "Enter Doctor Name: ";
                cin >> doctor_name[doctor_count];

                cout << "Enter Department: ";
                cin >> doctor_department[doctor_count];

                cout << "Enter Working Hours: ";
                cin >> doctor_working_hours[doctor_count];

                doctor_count++;
                cout << "Doctor added successfully!\n";
            }

            else {
                cout << "Error: Cannot add more doctors. Hospital limit reached (Max 10)!\n";
            }
            break;
        }


        case 2: {

            if (doctor_count == 0) {
                cout << "\nNo doctors registered in the system yet!\n";
            } else{
                cout << "\n--- List of All Doctors ---\n";
                for (int i = 0; i < doctor_count; i++) {
                    cout << "Doctor #" << (i + 1) << endl;
                    cout << "ID: " << doctor_ID[i] << endl;
                    cout << "Name: " << doctor_name[i] << endl;
                    cout << "Department: " << doctor_department[i] << endl;
                    cout << "Working Hours: " << doctor_working_hours[i] << " hrs" << endl;
                }
            }
            break;
        }
        case 3: {
            if (doctor_count == 0) {
                cout << "\nNo doctors registered to search!\n";
            } else {
                int search_id;
                bool found = false;

                cout << "\nEnter Doctor ID to search: ";
                cin >> search_id;

                for (int i = 0; i < doctor_count; i++) {
                    if (doctor_ID[i] == search_id) {
                        cout << "    Doctor Found    ";
                        cout << "ID: " << doctor_ID[i] << endl;
                        cout << "Name: " << doctor_name[i] << endl;
                        cout << "Department: " << doctor_department[i] << endl;
                        cout << "Working Hours: " << doctor_working_hours[i] << " hrs" << endl;
                        found = true;
                        break; // هنا يخرج لمن يحصل المريض
                    }
                }

                if (!found) {
                    cout << "Doctor with ID " << search_id << " not found!\n";
                }
            }
            break;
        }
        case 4: {
            if (doctor_count == 0) {
                cout << "\nNo doctors registered to filter by department!\n";
            } else {
                int dept_choice;
                cout << "\nSelect Department:\n";
                for (int i = 0; i < 5; i++) {
                    cout << (i + 1) << ". " << departments[i] << endl;
                }
                cout << "Enter department choice (1-5): ";
                cin >> dept_choice;

                if (dept_choice >= 1 && dept_choice <= 5) {
                    string selected_dept = departments[dept_choice - 1];
                    bool found = false;

                    cout << "\n--- Doctors in " << selected_dept << " ---\n";
                    for (int i = 0; i < doctor_count; i++) {
                        if (doctor_department[i] == selected_dept) {
                            cout << "ID: " << doctor_ID[i] << endl;
                            cout << "Name: " << doctor_name[i] << endl;
                            cout << "Working Hours: " << doctor_working_hours[i] << " hrs" << endl;
                            cout << "-----------------------\n";
                            found = true;
                        }
                    }

                    if (!found) {
                        cout << "No doctors found in this department.\n";
                    }
                } else {
                    cout << "Invalid department choice!\n";
                }
            }
            break;
        }
        case 5: {
            cout << "\nReturning to Main System Menu...\n";
            break;
        }

        default: {
            cout << "Invalid choice! Please select between 1 and 5.\n";
            break;
        }

    }

    while (doctor_choice !=5) ;


   
    	break;
    	case 3:

			 int dept_menu_choice;

    do {
        cout << "\n====================================\n";
        cout << "     Hospital Departments Module    \n";
        cout << "====================================\n";
        cout << "1. Display All Departments\n";
        cout << "2. Select Department & Verify\n";
        cout << "3. Show Doctors in Department\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> dept_menu_choice;

        switch (dept_menu_choice) {
            case 1: {
                cout << "\n--- Available Hospital Departments ---\n";
                for (int i = 0; i < 5; i++) {
                    cout << (i + 1) << ". " << departments[i] << "\n";
                }
                break;
            }

            case 2: {
                int dept_choice;
                do {
                    cout << "\nSelect Department (1-5): ";
                    cin >> dept_choice;

                    if (dept_choice < 1 || dept_choice > 5) {
                        cout << "[ERROR] Invalid choice! Please enter a number between 1 and 5.\n";
                    }
                } while (dept_choice < 1 || dept_choice > 5);

                string selected_dept = departments[dept_choice - 1];

                cout << "\n------------------------------------\n";
                cout << "Selected Department: " << selected_dept << "\n";
                cout << "Status: Verified Successfully\n";
                cout << "------------------------------------\n";
                break;
            }

            case 3: {
                int dept_choice;
                do {
                    cout << "\nSelect Department to view its doctors (1-5):\n";
                    for (int i = 0; i < 5; i++) {
                        cout << (i + 1) << ". " << departments[i] << "\n";
                    }
                    cout << "Enter choice: ";
                    cin >> dept_choice;

                    if (dept_choice < 1 || dept_choice > 5) {
                        cout << "[ERROR] Invalid choice! Please enter a number between 1 and 5.\n";
                    }
                } while (dept_choice < 1 || dept_choice > 5);

                string target_dept = departments[dept_choice - 1];

                cout << "\n--- Doctors in " << target_dept << " ---\n";
                bool found = false;
                for (int i = 0; i < doctor_count; i++) {
                    if (doctor_department[i] == target_dept) {
                        cout << "ID: " << doctor_ID[i]
                             << " | Name: " << doctor_name[i]
                             << " | Hours: " << doctor_working_hours[i] << " hrs\n";
                        found = true;
                    }
                }
                if (!found) {
                    cout << "No doctors assigned to this department.\n";
                }
                break;
            }

            case 4: {
                cout << "\nExiting Departments System...\n";
                break;
            }

            default: {
                cout << "\n[ERROR] Invalid choice! Please select between 1 and 4.\n";
                break;
            }
        }

    } while (dept_menu_choice != 4);
        choice =0;


    	break;
    	case 4:
  	   choice =0;


    	break;
    	case 5:
   	   choice =0;


    	case 6:
 	   choice =0;


    	break;
    	case 7:
       choice =0;



    	break;
    	case 8:
    	cout << bold+green+" r u sure for leaving? : ";
    	cin >>sure;
    	if (sure =="y"||sure =="Y"||sure =="yes"||sure =="YES"){
    		cout << blue+bold+"bye bye \n";
    	}
    	
    	
    }
}else if  (cin.fail()){
    cout << clear;
	cout << bold+red+"  wrong input\n try again\n";
	choice = 0;
    break;
}
}while(choice != 8);		
}
