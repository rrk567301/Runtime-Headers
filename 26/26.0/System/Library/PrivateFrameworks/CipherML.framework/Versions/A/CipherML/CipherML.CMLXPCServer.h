@interface CipherML.CMLXPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ requestsManager;
    void /* unknown type, empty encoding */ cacheCleaner;
    void /* unknown type, empty encoding */ rotationTask;
    void /* unknown type, empty encoding */ tokenFetcherTask;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
