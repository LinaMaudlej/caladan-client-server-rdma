#ifndef __RPC_COMMON_H__
#define __RPC_COMMON_H__

struct ib_info_t {
    int lid;
    int qpn;
    int mkey_args;
    long long addr_args;
    int mkey_result;
    long long addr_result;
};



enum req_opcode { RPC_FUNC_DECRYPT = 1, RPC_FUNC_ECHO = 2,CREATE_SLICE,DESTROY_SLICE,SLICE_REGISTER_FUNCTION,SLICE_MEMORY_ALLOCATE,SLICE_CALL_FUNCTION,RPC_FUNC_DONE, OPCODE_NUM};

//enum {RPC_FUNC_DECRYPT = 1, RPC_FUNC_ECHO = 2,CREATE_SLICE=3,DESTROY_SLICE=4,SLICE_CREATE_MEMORY=5,SLICE_REGISTER_FUNCTION,SLICE_CALL_FUNCTION, RPC_FUNC_DONE = 0xff};

#define IB_PORT_SERVER 1
#define IB_PORT_CLIENT 1
#define MAX_RECV_WQES 128

#define ARG_BUF_SIZE 10
#define RES_BUF_SIZE 10

#define TCP_PORT_OFFSET 23456
#define TCP_PORT_RANGE 1000


#endif

