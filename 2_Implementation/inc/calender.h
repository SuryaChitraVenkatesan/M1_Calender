/**
 * @file calender.h
 * @author SURYA V
 * @brief 
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _calender_H
#define _calender_H
void gotoxy();
void SetColor();
void ClearColor();
void ClearConsoleToColors();
void SetColorAndBackground();
int check_leapYear();
void increase_month();
void decrease_month();
int getNumberOfDays();
char *getName();
void print_date();
int getDayNumber();
char *getDay();
int checkNote();
void printMonth();
void AddNote();
void showNote();

#endif
