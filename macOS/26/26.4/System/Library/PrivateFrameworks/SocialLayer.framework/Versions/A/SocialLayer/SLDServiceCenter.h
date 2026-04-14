@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SLDServiceCenter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyConcurrentQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mainConnectionSetupQueue;
@property (retain, nonatomic) NSXPCConnection *conn;

+ (id)sharedCenter;

- (void).cxx_destruct;
- (id)init;
- (id)_synchronousRemoteObjectProxy;
- (void)_ensureMainConnectionSynchronously;
- (id)connectionForServiceClass:(Class)a0;

@end
