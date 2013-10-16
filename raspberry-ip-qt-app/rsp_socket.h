#ifndef RSP_SOCKET_H
#define RSP_SOCKET_H

const int BUFFER_SIZE = 255;

typedef struct
{
    unsigned short command;
    unsigned char option;
    char msg_buffer[BUFFER_SIZE];
    unsigned short  crc;

}msg_type;

class rsp_socket
{

public:
    rsp_socket();
   ~ rsp_socket();
private :
    msg_type msg;
};

#endif // RSP_SOCKET_H
