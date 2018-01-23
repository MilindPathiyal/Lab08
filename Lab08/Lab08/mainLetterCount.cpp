/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */

#include "letterCount.h"
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()

{
    //creating files
    ifstream inFile;
    ofstream outFile;
    string inName;
    string outName;
    cout << "Enter the input filename: ";
    cin >> inName;
    cout << "Enter the output filename: ";
    cin >> outName;
    inFile.open(inName);
    outFile.open(outName);
    if (inFile.fail() || outFile.fail())                //check if file is able to open safely
    {
        cout << "Error Opening File" << endl;
        return 1;
    }
    Letter stats[26];
    
    readFile( inName, outName, &stats[26]);
}
