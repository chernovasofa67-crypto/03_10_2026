#include <iostream>
#include "Order.h"
#include "OrdersSystem.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    OrdersSystem system;

    Order order1(
        "03.10.2026",
        "14:00",
        30,
        "Піца Маргарита",
        250
    );

    Order order2(
        "03.10.2026",
        "14:10",
        15,
        "Бургер з картоплею",
        220
    );

    Order order3(
        "03.10.2026",
        "14:20",
        45,
        "Суші сет",
        450
    );

    Order order4(
        "03.10.2026",
        "14:30",
        20,
        "Паста Карбонара",
        280
    );

    system.addOrder(order1);
    system.addOrder(order2);
    system.addOrder(order3);
    system.addOrder(order4);

    cout << "ВСІ ЗАМОВЛЕННЯ:" << endl;
    system.printOrders();

    cout << endl;
    cout << "КІЛЬКІСТЬ ЗАМОВЛЕНЬ: "
         << Order::getOrderCount() << endl;

    cout << endl;
    cout << "ЗАМОВЛЕННЯ, ВІДСОРТОВАНІ ЗА ЧАСОМ ПРИГОТУВАННЯ:" << endl;

    system.sortByPreparationTime();
    system.printOrders();

    cout << endl;
    cout << "ВИДАЛЕННЯ ПЕРШОГО ЗАМОВЛЕННЯ:" << endl;

    system.removeFirstOrder();

    cout << endl;
    cout << "ЗАМОВЛЕННЯ ПІСЛЯ ВИДАЛЕННЯ:" << endl;

    system.printOrders();

    return 0;
}