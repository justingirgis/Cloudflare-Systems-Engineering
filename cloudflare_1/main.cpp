#include "Ping.h"

int main()
{
    //     Ping ping("192.168.11.15");
    Ping ping("192.168.30.30");
    ping.start();

    while (1) sleep(10);
}