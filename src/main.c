#include <stdio.h>
#include "pico/stdlib.h"
#include "something.h"

int main()
{
    stdio_init_all();

    while (true) {
        somefile();
        sleep_ms(10000);
    }
}
