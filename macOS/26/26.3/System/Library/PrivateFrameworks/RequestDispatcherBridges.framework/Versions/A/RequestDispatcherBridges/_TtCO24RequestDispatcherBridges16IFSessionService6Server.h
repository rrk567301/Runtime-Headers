@interface _TtCO24RequestDispatcherBridges16IFSessionService6Server : NSObject <SRDIFSessionServiceXPCServer> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ jsonDecoder;
    void /* unknown type, empty encoding */ clientProxy;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _sessionClientBox;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendWithMessageData:(id)a0 with:(id /* block */)a1;
- (void)currentSessionIDForUserID:(id)a0 reply:(id /* block */)a1;

@end
