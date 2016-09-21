#include <stdio.h>
#include <Dobby/Dobby.h>


namespace Dobby {
    void Write(const char* event, const char* data) {
        printf("Event: ");
        printf(event);
        printf("\nData:");
        printf(data);
        printf("\n");
    }
}