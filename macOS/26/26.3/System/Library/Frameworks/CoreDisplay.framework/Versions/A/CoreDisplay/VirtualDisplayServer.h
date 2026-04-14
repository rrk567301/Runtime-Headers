@interface VirtualDisplayServer : NSObject {
    unsigned int _serverRPC_port;
}

- (void)close;
- (id)init;
- (void)dealloc;
- (int)spawnProxyWithOptions:(id)a0 clientHandler_port:(unsigned int)a1 proxyRPC_port:(unsigned int *)a2 displayID:(unsigned int *)a3;

@end
