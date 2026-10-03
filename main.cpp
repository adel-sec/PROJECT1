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
int patient_data[10][10][10][10][10][10][10];
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
           	case 1:
                
           	break;
           	case 2:
                   

           	break;



           	case 3:


           	break;
            case 4:



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
