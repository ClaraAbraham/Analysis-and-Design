/*
* Name: ProjectTwo.cpp 
* Author: Clara H. Abraham 
* Course: CS-300 Analysis and Design 2025 C-2 
* Date: 4/19/2025 
*/ 

#include <fstream>
#include <ifstream> 
#include <ofstream> 
#include <string> 
#include <list> 
#include <vector>
#include <algorithm> 
#include <iostream>
using namespace std; 

class CourseInfo {
private:
    vector<string> courseList; // Declaration of the private member vector 
    
// Public members (accessible from outside the class)
public:
    string courseID;
    string courseName;
    string preRequisite; 
    string element_to_find; 
    
// Default Constructor
CourseInfo(string courseID, string courseName = "") 

// Parameterized Constructor  
CourseInfo(string courseID, string courseName, string preRequisite) { 
    courseID = " CSCI100 "; 
    courseName = " Introduction to Computer Science "; 
    preRequisite = ""; 
} 

// Method to load from file 
void LoadFromFile(ifstream myFile, vector<string> courseList) {  

    // Open the file named "CourseInfo.txt"  
    ifstream myFile; 
    myFile.open("CourseInfo.txt");   

    // add all data from txt file into the vector, courseList, using built in function pushback()  
    while(myFile.is_open()) { 
        string courseInfo; // Declare a variable for storing lines of data   
        getline(fileName, courseInfo); // Get first line of data in the first iteration and store in variable ect.
        
        // Create a stringstream object 
        stringstream ss(courseInfo); 
        
        // Temporary object to store the splitted string
        string t; 
        
        // Delimiter
        char del = ','; 
        
        // Splitting the string by delimiter 
        while(getline(ss, t, del)) {  
            courseList.pushback(ss); 
        }
        
    } 
    // Close the file 
    myFile.close(); 
} 

// Method to print course list 
string PrintCourseList(vector<CourseInfo>& courses) { 

    if(courses.empty()) { 
        cout << "Course list is empty." << endl; 
    } 

    // Create a vector iterator called it
    vector<string>::iterator it; 
    
    for(it = courses.begin(); it != courses.end(); ++it) {   
        for(int c = 0; c < courses.size(); c++) { 
            if(it = courses.begin()) { 
                cout << courses[c] << ", " << courses[c] << endl; 
            } 
            else if(it = courses.begin() + 1) {
                cout << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
            } 
            else if(it = courses.begin() + 2) { 
                cout << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
            } 
            else if(it = courses.begin() + 3) {
                cout << courses[c] << ", " << courses[c] << endl; 
            } 
            else if(it = courses.begin() + 4) {
                cout << courses[c] << ", " << courses[c] << ", " << courses[c] << ", " << courses[c] << endl;  
            } 
            else if(it = courses.begin() + 5) {
                cout << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
            } 
            else if(it = courses.begin() + 6) {
                cout << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
            } 
            else if(it = courses.begin() + 7) {
                cout << courses[c] << ", " << courses[c] << ", " << courses[c] << ", " << courses[c] << endl;  
            } 
        } 
    } 
    return 0;  
} 

// Method to search for a course and print it to the console 
string Search_and_Print(vector<CourseInfo>& courses, string element_to_find) {   

    bool found = false; 
    
    // Create a vector iterator called iter
    vector<string>::iterator iter;   
    
    for(iter = courses.begin(); iter != courses.end(); ++iter) { 
        for (int i = 0; i < courses.size(); i++) { 
            if (iter = courses.begin() && courses[i] == element_to_find) {
                cout << "Course found: " << courses[i] << ", " << courses[i] << endl;   
                found = true; 
                break; 
            }
            else if(iter = courses.begin() + 1 && courses[i] == element_to_find) { 
                cout << "Course found: " << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
                found = true; 
                break; 
            } 
            else if(iter = courses.begin() + 2 && courses[i] == element_to_find) {  
                cout << "Course found: " << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
                found = true; 
                break; 
            } 
            else if(iter = courses.begin() + 3 && courses[i] == element_to_find) {  
                cout << "Course found: " << courses[c] << ", " << courses[c] << endl; 
                found = true; 
                break; 
            } 
            else if(iter = courses.begin() + 4 && courses[i] == element_to_find) { 
                cout << "Course found: " << courses[c] << ", " << courses[c] << ", " << courses[c] << ", " << courses[c] << endl;  
                found = true; 
                break; 
            } 
            else if(iter = courses.begin() + 5 && courses[i] == element_to_find) { 
                cout << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
                found = true; 
                break; 
            } 
            else if(iter = courses.begin() + 6 && courses[i] == element_to_find) { 
                cout << "Course found: " << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
                found = true; 
                break; 
            } 
            else if(iter = courses.begin() + 7 && courses[i] == element_to_find) { 
                cout << "Course found: " << courses[c] << ", " << courses[c] << ", " << courses[c] << ", " << courses[c] << endl; 
                found = true; 
                break; 
            }
        } 
    }    
        
    if (!found) {
        cout << "Course not found." << endl; 
    }  
    
    return 0; 
}

};  

int main(int argc, char *argv[]) {

LoadFromFile(); 

// Menu with options and their descriptions 
cout << "Welcome to the course planner." << endl;
cout << "1. Load Data Structure." << endl;
cout << "2. Print Course List." << endl;
cout << "3. Print Course." << endl;
cout << "9. Exit" << endl;

string menuSelection; 
cout << "What would you like to do? "; // Type a menu option and press enter
cin >> menuSelection; // Get user input from the keyboard
if(menuSelection == 1 || menuSelection == 2 || menuSelection == 3 || menuSelection == 9) {
    cout << menuSelection << endl; // Display the input 

    while(menuSelection != 9 && menuSelection == 1 || menuSelection == 2 || menuSelection == 3) {   
        cout << "What would you like to do? ";
        cin >> menuSelection; 
        cout << menuSelection << endl; 

        if(menuSelection == 1) { 
            // Call the function to load from file
            cout << "Loading...  "; 
            cout << "...  "; 
            cout << "Loading...  " << endl;  
            LoadFromFile();  
        } 
        else if(menuSelection == 2) {
            // Call the function to print the course list 
            cout << "Here is a sample schedule: " << endl; 
            PrintCourseList();   
        } 
        else if(menuSelection == 3) { 
            // Call the function to print a course 
            cout << "What course do you want to know about? ";   
            cin << keyword; 
            cout << keyword << endl;  
            Search_and_Print(keyword);  
        }

    } 

    if(menuSelection == 9) { 
        cout << "Thank you for using the course planner!" << endl; // Exit program. 
    } 

} 
else { 
    // Any option that is not within the menu is an invalid input 
    cout << menuSelection << endl; 
    cout << menuSelection << " is not a valid option." << endl; 
    
    LoadFromFile(); 

    // Menu with options and their descriptions  
    cout << "1. Load Data Structure." << endl;
    cout << "2. Print Course List." << endl;
    cout << "3. Print Course." << endl;
    cout << "9. Exit" << endl;


    cout << "What would you like to do? "; // Type a menu option and press enter
    cin >> menuSelection; // Get user input from the keyboard
    if(menuSelection == 1 || menuSelection == 2 || menuSelection == 3 || menuSelection == 9) {
        cout << menuSelection << endl; // Display the input 

        while(menuSelection != 9 && menuSelection == 1 || menuSelection == 2 || menuSelection == 3) {   
            cout << "What would you like to do? ";
            cin >> menuSelection; 
            cout << menuSelection << endl; 

            if(menuSelection == 1) { 
                // Call the function to load from file
                cout << "Loading...  "; 
                cout << "...  "; 
                cout << "Loading...  " << endl;  
                LoadFromFile();  
            } 
            else if(menuSelection == 2) {
                // Call the function to print the course list 
                cout << "Here is a sample schedule: " << endl; 
                PrintCourseList();   
            } 
            else if(menuSelection == 3) { 
                // Call the function to print a course 
                cout << "What course do you want to know about? ";   
                cin << keyword; 
                cout << keyword << endl;  
                Search_and_Print(keyword);  
            }

        } 

        if(menuSelection == 9) { 
            cout << "Thank you for using the course planner!" << endl; // Exit program. 
        } 
    
} 
