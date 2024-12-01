#include <iostream>
#include <climits>
using namespace std;

int main()
{
    setlocale(LC_ALL, "uk_UA");

    ///////////////Завдання 1/////////

    //int numworkers;
    //cout << "Введіть кількість співробітників: ";
    //cin >> numworkers;
    //if (numworkers <= 0) 
    //{
    //    cout << "Кількість співробітників повинна бути більшою за нуль!" << endl;
    //    return 1;
    //}
    //double* salaries = new double[numworkers];
    //for (int i = 0; i < numworkers; ++i)
    //{
    //    cout << "Введіть зарплату для співробітника: " << endl;
    //    cin >> salaries[i];
    //    i + 1;
    //}
    //double totalSalary = 0;
    //for (int i = 0; i < numworkers; ++i)
    //{
    //    totalSalary += salaries[i];
    //}
    //double averageSalary = totalSalary / numworkers;
    //cout << "Середня заробітна плата: " << averageSalary << endl;
    //delete[]salaries;
    //
    //return 0;
//}

////////////////Завдання 2////////////////

//   int numHouseholds;
//    cout << "Введіть кількість домогосподарств";
//    cin >> numHouseholds;
//    double* waterConsuption = new double[numHouseholds];
//    for (int i = 0; i < numHouseholds; ++i)
//    {
//        cout << "Введіть споживання води для домогосподарства: " << i + 1 << "(літри): ";
//        cin >> waterConsuption[i];
//    }
//    double totalConsuption = 0;
//    for (int i = 0; i < numHouseholds; i++)
//    {
//        totalConsuption += waterConsuption[i];
//
//    }
//    double averageConsumption = totalConsuption / numHouseholds;
//    cout << "Середнє споживання води для домогосподарств: " << averageConsumption << "(літри): " << endl;
//    delete[]waterConsuption;
//    return 0;
//}
 
    //////////////////////Завдання 3///////////////////

//    int numAmount;
//    const int AMOUNT = 100;
//    cout << "Введіть кількість товарів: " << endl;
//    cin >> numAmount;
//    double* costWare = new double[numAmount];
//    if (numAmount <= 0 || numAmount > AMOUNT) {
//        cout << "Кільківсть товарів повинна бути більшою за нуль і меншою або рівною" << AMOUNT << endl;
//        return 1;
//    }
//    double prices[AMOUNT];
//    for (int i = 0;  i < numAmount; i++)
//    {
//        cout << "Введіть вартість для товару :" << i + 1 << endl;
//        cin >> prices[i];
//    }
//    double totalCost = 0;
//    for (int i = 0; i < numAmount; ++i)
//    {
//        totalCost += prices[i];
//    }
//    cout << "Загальна вартість усіх товарів: " << totalCost << "одиниць валюти." << endl;
//    return 0;
//}
    ///////////////////////////////Завдання 4///////////////////
//    int numStudents;  
//   
//    cout << "Введіть кількість учнів у класі: ";
//    cin >> numStudents;
//
//    if (numStudents <= 0) {
//        cout << "Кількість учнів повинна бути більше за нуль!" << endl;
//        return 1;  
//    }
//
//
//    int* grades = new int[numStudents];
//
//  
//    for (int i = 0; i < numStudents; ++i) {
//        cout << "Введіть бал для учня " << i + 1 << ": ";
//        cin >> grades[i];
//    
//    int maxGrade = INT_MIN;
//    int minGrade = INT_MAX;
//
//    for (int i = 0; i < numStudents; ++i) {
//        if (grades[i] > maxGrade) {
//            maxGrade = grades[i];
//        }
//        if (grades[i] < minGrade) {
//            minGrade = grades[i];
//        }
//    }
//    cout << "Максимальний бал: " << maxGrade << endl;
//    cout << "Мінімальний бал: " << minGrade << endl;
//
//    delete[] grades;
//
//    return 0;
//}
