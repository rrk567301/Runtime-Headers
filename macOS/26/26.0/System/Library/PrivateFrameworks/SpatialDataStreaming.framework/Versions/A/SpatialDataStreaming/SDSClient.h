@class NSString;

@interface SDSClient : NSObject <SDSActivatable> {
    void /* unknown type, empty encoding */ clientServer;
    void /* unknown type, empty encoding */ targetQueue;
}

@property (nonatomic, copy) id /* block */ stateUpdateHandler;
@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (void)cancel;
- (id)init;
- (void)activate;
- (void)setTargetQueue:(id)a0;
- (void).cxx_destruct;
- (void)connectWithServiceID:(id)a0 endPoint:(id)a1 versionRange:(id)a2 sessionHandler:(id /* block */)a3;
- (id)initWithLoopbackEnabled:(BOOL)a0 port:(unsigned short)a1;
- (void)setConnectionMigrationUUID:(id)a0;
- (void)setServerBundleID:(id)a0;
- (void)setTargetQueue:(id)a0 isShared:(BOOL)a1;
- (void)findEndpointWithServiceID:(id)a0 endpointHandler:(id /* block */)a1;
- (void)findObfuscatedEndpointWithServiceID:(id)a0 bundleID:(id)a1 endpointHandler:(id /* block */)a2;

@end
