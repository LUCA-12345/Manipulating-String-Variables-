#include <iostream>
#include <string>
#include <cstdlib> 
#include <fstream>


using namespace std; 

int main ()
{

    const int SIZE = 51;
    string info[SIZE]; 

    string searchName;


    ifstream inputFile; 
    inputFile.open("/Users/luketascone/Downloads/lrtascone_lab10A/phonebook.txt"); 

    if (inputFile)
    {
        int count;

        for (count = 0; count < SIZE; count++)
        {
            getline(inputFile, info[count]);
        }
        
    }


   
    

    cout << "Enter a name or partial name to search for: ";
    cin >> searchName;
    cout << endl;

    cout << "Here are the results of the search" << endl;


    for (int count = 0; count < SIZE; count++)                                     
    {
    
        if ((info[count].find(searchName,0)) != -1)
        {
            cout << info[count]<< endl; 
        }
        
    }
    
    return 0;
}
