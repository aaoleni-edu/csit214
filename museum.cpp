#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    const double CHILD_PRICE = 15.00;
    const double ADULT_PRICE = 25.50;
    const double SECURITY_FEE = 15.00;

    cout << "\n       Eighth Art Museum\n\n";

    while (true)
    {
        int childTickets, adultTickets, totalTickets;
        double childCost, adultCost, totalCost, securityCost, cashReceived;

        cout << "Enter the children tickets or -1 to stop...";
        cin >> childTickets;
        if (childTickets < 0) break;
        cout << "Enter adults tickets.......................";
        cin >> adultTickets;
        if (adultTickets < 0) break;
        totalTickets = childTickets + adultTickets;

        childCost = (childTickets - floor(childTickets / 3)) * CHILD_PRICE;
        if (adultTickets > 4) adultCost = (ADULT_PRICE - 3) * adultTickets;
        else adultCost = ADULT_PRICE * adultTickets;
        totalCost = childCost + adultCost;
        if (totalTickets > 25 || childTickets > 10) securityCost = SECURITY_FEE;
        else securityCost = 0;

        cout << "\n\n                  Eighth Art Museum\n"
            << "                  ----------------------\n\n"
            << "               Tickets\tPrice\tTotal\n\n"
            << "   Child         " << childTickets << "\t" << CHILD_PRICE << "\t" << childCost << "\n"
            << "   Adult         " << adultTickets << "\t" << ADULT_PRICE << "\t" << adultCost << "\n"
            << "                 " << totalTickets << endl
            << "   Security fee\t\t\t    " << securityCost << "\n\n\n"
            << "        Total:     " << totalCost << "\n\n\n";

        while (true)
        {
            cout << "Cash received................";
            cin >> cashReceived;
            cout << endl;
            if (cashReceived >= totalCost) break;
            cout << "Cash must be >= total bill\n\n";
        }

        cout << "Change                   " << (cashReceived - totalCost) << "\n\n"
            << "Confirmation Number = 100\n\n";
    }

    cout << endl;

    return 0;
}