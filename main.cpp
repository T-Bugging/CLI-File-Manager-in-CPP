#include<iostream>
#include<string>
#include<dirent.h>
#include<direct.h>
using namespace std;

int main(){
    string cmd;
  cout<<"Welcome to the File Manager!!, Write 'help' to see the list of commands."<<endl;
  
  //These are all the possible commands that can be used in the file manager.
  string command[9]={"help","mkdir","rmdir","ls","cd","pwd","touch","rm","exit"};

 //Main loop to take user input and execute commands
  while (true){
    cout<<"-----------------------------------------------------------------"<<endl;
     cout<<"Enter your command here ->  ";
    cin >> cmd;
    
    //Help command to display all available commands
     if(cmd == command[0]) {
      cout << "Available commands:" << endl;
      cout << "mkdir - Create a new directory" << endl;
      cout << "rmdir - Remove an existing directory" << endl;
      cout << "ls - List files in the current directory" << endl;
      cout << "cd - Change the current directory" << endl;
      cout << "pwd - Print the current working directory" << endl;
      cout << "touch - Create a new file" << endl;
      cout << "rm - Remove a file" << endl;
      cout << "exit - Exit the file manager" << endl;
       
  }
      //mkdir :- Used to create a new directory
     else if (cmd == command[1]){
        string dirName;
        cout<<"Enter Name of the directory: ";
        cin >> dirName;
            if(mkdir(dirName.c_str())==0){
                cout<<"Directory created Successfully."<<endl;
            }
            else{
                cout<<"Error: Directory already exists or cannot be created."<<endl;
            }
     }
    //rmdir :- Used to remove an existing directory
    else if(cmd == command[2]){
        string dirName;
        cout<<"Enter Name of the directory to remove: ";
        cin >> dirName;
            if(rmdir(dirName.c_str())==0){
                cout<<"Directory removed Successfully."<<endl;
            }
            else{
                cout<<"Error: Directory does not exist or cannot be removed."<<endl;
            }
    }     
    //ls :- Used to list files in the current directory
    else if(cmd == command[3]){
        DIR *dir;
        struct dirent *entry;
        dir = opendir(".");
        bool isEmpty = true;
        if(dir!=NULL){
            cout<<"Files in the current directory: "<<endl;
            while((entry = readdir(dir)) !=NULL){
                cout<<entry->d_name<<endl;
                }
                closedir(dir);
                isEmpty = false;
        }
        if(isEmpty){
            cout<<"No files in the current directory."<<endl;
        }
        else{
            cout<<"Error: Could not open directory."<<endl;
        }      
    }
    //cd :- Used to change the current directory
       else if(cmd == command[4]){
        string dirName;
        cout<<"Enter Name of the directory to change to: ";
        cin >> dirName;
            if(chdir(dirName.c_str())==0){
                cout<<"Directory changed Successfully."<<endl;
            }
            else{
                cout<<"Error: Directory does not exist or cannot be changed to."<<endl;
            }
       }
       //pwd :- Used to print the current working directory
       else if(cmd == command[5]){
        char cwd[1000];
        if(_getcwd(cwd,sizeof(cwd)) != NULL) {
            cout << "Current working directory: " << cwd << endl;
        } else {
            cout << "Error: Unable to get current working directory." << endl;
        }
       }
       //touch :- Used to create a new file
       else if(cmd==command[6]){
        string filename;
        cout<<"Enter Name of the file to create: ";
        cin >> filename;
       FILE *file = fopen(filename.c_str(), "w");
       if(file != NULL) {
          fclose(file); 
          cout << "File created Successfully." << endl;}
        else { 
            cout << "Error: File already exists or cannot be created." << endl;
            }

       }
       //rm :- Used to remove a file
       else if(cmd == command[7]){
        string filename;
        cout<<"Enter Name of the file to remove: ";
        cin >> filename;
        if(remove(filename.c_str()) == 0) {
            cout << "File removed Successfully." << endl;
        } else {
            cout << "Error: File does not exist or cannot be removed." << endl;
        }
       }
       //exit :- Used to exit the file manager
       else if(cmd == command[8]){
        cout<<"Exiting the File Manager. Goodbye!"<<endl;
        break;
       }
       //If the command is not recognized, display an error message
       else{
        cout<<"Invalid Command! Please try again."<<endl;
  }
  }
 return 0;
}
