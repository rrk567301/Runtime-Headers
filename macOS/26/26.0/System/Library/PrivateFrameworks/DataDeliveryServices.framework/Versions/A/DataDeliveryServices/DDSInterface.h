@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, DDSManaging, DDSManagingDelegate;

@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate>

@property (retain, nonatomic) id<DDSManaging> serverOverride;
@property (retain, nonatomic) NSXPCConnection *remoteServer;
@property (readonly, nonatomic) DDSInterface *sharedInstance;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionUsageQueue;
@property (weak) id<DDSManagingDelegate> delegate;
@property (readonly, copy) NSString *xpcServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)xpcConnectionOptionsForServer;
+ (id)interface;

- (id)server;
- (void)updateAssetForQuery:(id)a0 callback:(id /* block */)a1;
- (void)assertionIDsForClientID:(id)a0 reply:(id /* block */)a1;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (void)fetchAssetUpdateStatusForQuery:(id)a0 callback:(id /* block */)a1;
- (id)initWithXPCServiceName:(id)a0;
- (void)triggerUpdate;
- (void)teardownXPCConnection;
- (id)serviceObjectProxy;
- (void)_teardownXPCConnection;
- (id)syncServer;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (id)syncServiceObjectProxy;
- (void)triggerDumpWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeAssertionWithID:(id)a0;

@end
