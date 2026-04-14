@interface ALXPC.ALServiceDelegate : NSObject <NSXPCListenerDelegate, ALXPC.ALXPCProtocol> {
    void /* unknown type, empty encoding */ _listener;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _dataService;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)onData:(id)a0;

@end
