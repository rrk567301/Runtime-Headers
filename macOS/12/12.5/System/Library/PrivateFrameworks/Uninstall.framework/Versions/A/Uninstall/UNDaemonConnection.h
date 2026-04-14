@class NSObject, NSMachPort, NSMutableDictionary;
@protocol OS_dispatch_source;

@interface UNDaemonConnection : NSObject {
    NSMachPort *serverPort;
    NSMachPort *servicePort;
    NSMachPort *statusPort;
    NSMutableDictionary *requestLookup;
    NSObject<OS_dispatch_source> *inSource;
    NSObject<OS_dispatch_source> *outSource;
    BOOL inShutdown;
}

+ (id)copyOfConnectionWithAuth:(struct AuthorizationOpaqueRef { } *)a0;
+ (id)copyOfConnection;

- (void)dealloc;
- (id)init;
- (void)disconnected;
- (BOOL)connectToDaemon:(struct AuthorizationOpaqueRef { } *)a0;
- (id)initWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (BOOL)abortUninstallOfID:(unsigned int)a0;
- (unsigned int)requestUninstallOfBundlesAtPaths:(id)a0 withRequest:(id)a1;
- (id)requestForRequestID:(unsigned int)a0;
- (void)removeRequestByID:(unsigned int)a0;

@end
