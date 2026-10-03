//
// Created by Евгения on 03.10.2026.
//

#ifndef INC_03_10_2026_ORDERSSYSTEM_H
#define INC_03_10_2026_ORDERSSYSTEM_H


#pragma once
#include "Order.h"
#include <vector>

using namespace std;

class OrdersSystem
{
private:
    vector<Order> orders;

public:
    void addOrder(const Order& order);
    void sortByPreparationTime();
    void printOrders() const;
    void removeFirstOrder();
    int getOrdersCount() const;
};


#endif //INC_03_10_2026_ORDERSSYSTEM_H
