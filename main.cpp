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
string doctor_name[10];
string doctor_department[10];
int doctor_working_hours[10];
int doctor_ID[10];
int doctor_data[10][10][10]; 
	
	
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
    	do{

    	    	  choice =0;
    	   cout <<bold+green+"===========================\n";    	   
           cout <<bold+red+"     doctors managements ";
    	   cout <<bold+green+"===========================\n";
           



          }while(true);
   
    	break;
    	case 3:
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
