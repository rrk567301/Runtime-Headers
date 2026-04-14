@class NSXPCConnection;

@interface LNProcessInstanceRegistryClient : NSObject

@property (class, readonly, nonatomic) LNProcessInstanceRegistryClient *sharedInstance;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) long long retryCount;

- (id)init;
- (void).cxx_destruct;
- (id)registerWithError:(id *)a0;
- (id)makeXPCConnection;

@end
