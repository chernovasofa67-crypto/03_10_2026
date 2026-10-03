//
// Created by Евгения on 03.10.2026.
//

#include "OrdersSystem.h"
#include <iostream>
#include <algorithm>

using namespace std;

void OrdersSystem::addOrder(const Order& order)
{
    orders.push_back(order);
}

void OrdersSystem::sortByPreparationTime()
{
    sort(orders.begin(), orders.end(),
        [](const Order& a, const Order& b)
        {
            return a.getPreparationTime() < b.getPreparationTime();
        });
}

void OrdersSystem::printOrders() const
{
    if (orders.empty())
    {
        cout << "Замовлень немає." << endl;
        return;
    }

    for (const Order& order : orders)
    {
        cout << "------------------------" << endl;
        order.print();
    }

    cout << "------------------------" << endl;
}

void OrdersSystem::removeFirstOrder()
{
    if (orders.empty())
    {
        cout << "Замовлень немає." << endl;
        return;
    }

    cout << "Перше замовлення, яке видалено:" << endl;
    orders[0].print();

    orders.erase(orders.begin());
}

int OrdersSystem::getOrdersCount() const
{
    return orders.size();
}
