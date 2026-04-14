@interface ALXPC.ALServiceDelegate : NSObject <NSXPCListenerDelegate, ALXPC.ALXPCProtocol> {
    void /* unknown type, empty encoding */ _listener;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _dataService;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)onData:(id)a0;

@end
