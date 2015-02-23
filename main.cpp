//
//  main.cpp
//  TBS
//
//  Created by VSSKANAND on 23/02/15.
//  Copyright (c) 2015 Anand. All rights reserved.
//

/* Telephone Billing System */

/* Header Files */
#include<iostream>
#include<fstream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
#include<dos.h>
using namespace std;

/* Defining accountant class */
class account
{
    char name[30];
    char address[60];
    long acc_no;
    long phone_no;
    
public:
    void add();
    void modify();
    void del();
    void display();
    void generate();
    void help();
    
};

account obj;

int bil_ctr=1; //counter variable for bill id

/* Function for converting a month's value from integer to string */
char *mon(int m)
{
    switch(m)
    {
        case (1):
            return("Jan");
            
        case(2):
            return("Feb");
            
        case(3):
            return("Mar");
            
        case(4):
            return("Apr");
            
        case(5):
            return("May");
            
        case(6):
            return("Jun");
            
        case(7):
            return("Jul");
            
        case(8):
            return("Aug");
            
        case(9):
            return("Sep");
            
        case(10):
            return("Oct");
            
        case(11):
            return("Nov");
            
        case(12):
            return("Dec");
    }
}

void main()
{
    char ch1,ch2;
    while(1);
    {
        //clrscr();
        gotoxy(30,5);
        cout<<"Supreme Telecome PVT LTD";
        gotoxy(30,6);
        cout<<"_____________________________________";
        gotoxy(30,8);
        cout<<"'M'anage customer Records ";
        gotoxy(30,10);
        cout<<"'D'isplay list of customers ";
        gotoxy(30,12);
        cout<<"'G'enerate Bill";
        gotoxy(30,14);
        cout<<"'H'elp";
        gotoxy(30,16);
        cout<<"'E'xit";
        gotoxy(30,30);
        
        
        cout<<"Enter your choice";
        ch1=getch();
        ch1=toupper(ch1);
        shwitch(ch1)
        {
        case('D'):
            obj.display();
            break;
        case('G'):
            obj.generate();
            break;
        case('H'):
            obj.help();
            break;
        case('E'):
            clrscr();
            exit(1);
        case('M'):
            ch2='A';
            do{
                clrscr();
                gotoxy(30,5);
                cout<<"Supreme Telecome Pvt. Ltd.";
                gotoxy(30,6);
                cout<<"__________________________";
                gotoxy(30,8);
                cout<<"'A'dd new record";
                gotoxy(30,10);
                cout<<"'M'odify existing record";
                gotoxy(30,12);
                cout<<"'D'elete existing record";
                gotoxy(30,14);
                cout<<"'E'xit";
                gotoxy(30,30);
                cout<<"Enter your choice";
                ch2=getch();
                ch2=toupper(ch2);
                switch(ch2)
                {
                    case('A'):
                        obj.add();
                        break;
                    case('M'):
                        obj.modify();
                        break;
                    case('D'):
                        obj.del();
                        break;
                    case('E'):
                        break;
                } //end of inner switch-case bock
            }while(ch2!='E');
        }//End of outer switch-case block
    }//End of while block
}//End of main()

/* Function for adding a new customer */




