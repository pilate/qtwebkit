#ifndef DOBBY
#define DOBBY

namespace Dobby {
    void Write(const char* event, const char* data);
    void Write(const char* event, const WTF::CString data);
    void Write(const char* event, const WTF::String data);
}

#endif