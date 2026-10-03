//
// Created by Евгения on 03.10.2026.
//

#include "Order.h"
#include <iostream>

using namespace std;

int Order::orderCount = 0;

Order::Order(string d, string t, int prep, string desc, double p)
{
    date = d;
    time = t;
    preparationTime = prep;
    description = desc;
    price = p;

    orderCount++;
    orderNumber = orderCount;
}

string Order::getDate() const
{
    return date;
}

string Order::getTime() const
{
    return time;
}

int Order::getPreparationTime() const
{
    return preparationTime;
}

string Order::getDescription() const
{
    return description;
}

double Order::getPrice() const
{
    return price;
}

int Order::getOrderNumber() const
{
    return orderNumber;
}

void Order::print() const
{
    cout << "Номер замовлення: " << orderNumber << endl;
    cout << "Дата: " << date << endl;
    cout << "Час: " << time << endl;
    cout << "Час приготування: " << preparationTime << " хв." << endl;
    cout << "Опис: " << description << endl;
    cout << "Ціна: " << price << " грн." << endl;
}

int Order::getOrderCount()
{
    return orderCount;
}
