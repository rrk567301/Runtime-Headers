@interface _TtCC18CompositorServices22RemoteCompositorClient10XPCService : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ connectionType;
    void /* unknown type, empty encoding */ videoStreamType;
    void /* unknown type, empty encoding */ clients;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
