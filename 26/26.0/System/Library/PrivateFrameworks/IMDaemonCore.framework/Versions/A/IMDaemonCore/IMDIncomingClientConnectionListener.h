@interface IMDIncomingClientConnectionListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ allowedEntitlements;
    void /* unknown type, empty encoding */ requestHandlers;
    void /* unknown type, empty encoding */ clientConnectionWorkloop;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
