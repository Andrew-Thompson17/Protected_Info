/**
 *   @file: secret.cpp
 * @author: Andrew Thompson
 *   @date: November 8, 2020
 *  @brief: User creates a username and password, creates a text file with whatever information they want, then secures it.
 */

/** Current Goal, check if username & password exists
 * if so, open their file using mkdir() func
 * if not, ask them to create an account and create the folder
 * Store each login info in text file?? to access later. 
 **/ 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <stdio.h>
#include <io.h>
using namespace std;

void credentials(string &username, string &password);

void createFile(ifstream &output, string &username, string &password);

void createMenu(int &choice);

int main(int argc, char const *argv[]) {
    ifstream input;
    ofstream output;
    string ofFileName;
    string username;
    string password;
    int choice;
    char ans;

    credentials(username, password);
    cout << "Now that you have an account, would you like to create your personal file? y/n" << endl;
    cin >> ans;
    if(ans == 'y'){
        cout << "Great, what would you like to name this file?";
        cin >> ofFileName;
        output.open(ofFileName);
        if(output.is_open()){
            cout << "What would you like to store in here?" << endl;
            createMenu(choice);
            if(choice == 1){
                output << "Your username is " << username << endl;
                output << "Your password is " << password << endl;
            }

        }
        else if(output.fail()){
            cout << "We failed to create your file." << endl;
        }
    }


	/*add code*/
	return 0;
}/// main

void credentials(string &username, string &password){
    char response;
    cout << "Would you like to create an account? y/n ";
    cin >> response;
    if(response == 'y'){
        cout << "Create your username here: ";
        cin >> username;
        cout << "Create your password here: ";
        cin >> password;
        cout << "Your username is: " << username << endl;
        cout << "Your password is: " << password << endl;
    }
    else if(response == 'n'){
        cout << "Ok, have a great day." << endl;
        exit(1);
    }
    else{
        cout << "I'm not sure I understand.";
        cout << endl;
        credentials(username, password);
        exit(1);
    }
}

void createFile(ifstream &output, string &username, string &password){

}

void createMenu(int &choice){
    
    cout << "1. Login Information" << endl;
    cout << "2. "
    
    cout << "Enter the number of the choice you want: ";
    cin >> choice;

}