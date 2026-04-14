@class NSXPCConnection;

@interface LNProcessInstanceRegistryClient : NSObject

@property (class, readonly, nonatomic) LNProcessInstanceRegistryClient *sharedInstance;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) long long retryCount;

- (void).cxx_destruct;
- (id)init;
- (id)registerWithError:(id *)a0;
- (id)makeXPCConnection;

@end
