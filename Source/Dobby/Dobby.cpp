#include "config.h"

#include <wtf/text/CString.h>
#include <wtf/text/WTFString.h>

#include <stdio.h>
#include <Dobby/Dobby.h>



namespace Dobby {
    void Write(const char* event, const char* data) {
        printf("Event: ");
        printf(event);
        printf("\nData: ");
        printf(data);
        printf("\n");
    }
    void Write(const char* event, const WTF::CString data) {
        Dobby::Write(event, data.data());
    }
    void Write(const char* event, const WTF::String data) {
        Dobby::Write(event, data.utf8());
    }
}
