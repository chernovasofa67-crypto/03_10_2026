//
// Created by Евгения on 03.10.2026.
//

#ifndef INC_03_10_2026_ORDER_H
#define INC_03_10_2026_ORDER_H


#pragma once
#include <string>
using namespace std;

class Order
{
private:
    static int orderCount;

    string date;
    string time;
    int preparationTime;
    string description;
    double price;
    int orderNumber;

public:
    Order(string d, string t, int prep, string desc, double p);

    string getDate() const;
    string getTime() const;
    int getPreparationTime() const;
    string getDescription() const;
    double getPrice() const;
    int getOrderNumber() const;

    void print() const;

    static int getOrderCount();
};



#endif //INC_03_10_2026_ORDER_H
