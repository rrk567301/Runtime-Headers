@interface SecureMessagingAgentCore.XPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ xpcDaemons;
    void /* unknown type, empty encoding */ deliveryDaemon;
    void /* unknown type, empty encoding */ registrationDaemon;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
