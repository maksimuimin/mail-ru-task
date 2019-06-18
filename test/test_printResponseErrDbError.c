#include <glob.h>
#include "../include/cube_iproto.h"

int main() {
    unsigned char response[] = {
        0x02, 0x00, 0x00, 0x00, //<svc_id>
        0x11, 0x00, 0x00, 0x00,//<body_length>
        0x01, 0x00, 0x00, 0x00, //<request_id>
        0x02, 0x00, 0x00, 0x00, //<return_code>
        0x09, 0x00, 0x00, 0x00, /*<str_len>*/ 0x64, 0x62, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x00 //<error_string> ::= db error
    };

    printResponse((char *)response);

    return 0;
}