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

#ifndef letterCount_h
#define letterCount_h
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#endif /* letterCount_h */


struct Letter

{
    int count;
    char ch;
};

void readFile(string inName, string outName, Letter stats[]);

