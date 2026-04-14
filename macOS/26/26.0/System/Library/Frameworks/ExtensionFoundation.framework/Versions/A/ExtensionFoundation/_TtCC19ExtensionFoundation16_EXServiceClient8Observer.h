@interface _TtCC19ExtensionFoundation16_EXServiceClient8Observer : NSObject <NSXPCListenerDelegate, _TtPC19ExtensionFoundation7Service22ObserverUpdateProtocol_> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ continuation;
}

@property (nonatomic, readonly) long long hash;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)observer:(id)a0 reply:(id /* block */)a1;

@end
