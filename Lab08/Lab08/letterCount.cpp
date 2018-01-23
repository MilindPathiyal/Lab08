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

void readFile( string inName, string outName, Letter stats[26]){
    //open up the input and output .txt
    ifstream inFile;
    inFile.open(inName);
    ofstream outFile;
    outFile.open(outName);
    char ch;
    int i;
    
    //initialize the struct array
    for (i=0;i<26;i++)
    {
        stats[i].count= 0;          //fill the int array
        stats[i].ch = ('a' + i);    //fill the char array
    }
    
    
    
    while (!inFile.eof())           //scan through the file until the end of characters
        
    {
        inFile.get(ch);
        
        //increment counter for appropriate character

        if('a' <= ch && ch <= 'z')
            stats[ch - 'a'].count++;
    }
    
    inFile.close(); //safely close the file
    
    
    //Sort the numbers in the array from greatest occurrence to least occurrence

    for(int i = 0; i < 26; ++i){
        for(int j = i -1; j >=0 && stats[j+1].count > stats[j].count; j--){
            swap(stats[j], stats[j+1]);
        }
    }


    //print characters
    for(i=0;i<26;i++)
        
    {
        if(stats[i].count>0)            //checks if the index letter has a value count or not
            
        {
            cout <<stats[i].ch<<" occured "<<stats[i].count<<" times"<<endl;    //PRINTS ON SCREEN

            outFile <<stats[i].ch<<" occured "<<stats[i].count<<" times"<<endl; //PRINTS ON output.txt
            
        }
        
    }
}

