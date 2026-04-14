@interface _TtCO24RequestDispatcherBridges16IFSessionService6Server : NSObject <SRDIFSessionServiceXPCServer> {
    void /* unknown type, empty encoding */ jsonDecoder;
    void /* unknown type, empty encoding */ clientProxy;
    void /* unknown type, empty encoding */ logger;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sendWithMessageData:(id)a0 with:(id /* block */)a1;
- (void)getCurrentSessionIdentifierWithReply:(id /* block */)a0;

@end
