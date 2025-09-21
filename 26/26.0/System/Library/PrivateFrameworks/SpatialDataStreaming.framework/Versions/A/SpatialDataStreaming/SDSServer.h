@class NSString;

@interface SDSServer : NSObject <SDSActivatable> {
    void /* unknown type, empty encoding */ clientServer;
    void /* unknown type, empty encoding */ targetQueue;
    void /* unknown type, empty encoding */ loopbackEnabled;
    void /* unknown type, empty encoding */ loopbackPort;
}

@property (nonatomic, copy) id /* block */ stateUpdateHandler;
@property (nonatomic, readonly) NSString *description;

+ (id)defaultServiceID;

- (void)dealloc;
- (void)cancel;
- (id)init;
- (void)activate;
- (void)setTargetQueue:(id)a0;
- (void).cxx_destruct;
- (id)initWithLoopbackEnabled:(BOOL)a0 port:(unsigned short)a1;
- (void)listenWithServiceID:(id)a0 versionRange:(id)a1 sessionHandler:(id /* block */)a2;
- (void)setTargetQueue:(id)a0 isShared:(BOOL)a1;
- (unsigned short)getLoopbackPort;
- (void)findEndpointWithServiceID:(id)a0 endpointHandler:(id /* block */)a1;

@end
