@class NSString, NSSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue, HMDActiveXPCClientConnectionsManagerDelegate;

@interface HMDActiveXPCClientConnectionsManager : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSHashTable *mutableClientConnections;
@property (readonly, copy) NSSet *clientConnections;
@property (weak) id<HMDActiveXPCClientConnectionsManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addClientConnection:(id)a0;
- (void)handleClientConnectionDidActivate:(id)a0;
- (void)handleClientConnectionDidDeactivate:(id)a0;
- (id)initWithLogIdentifier:(id)a0 workQueue:(id)a1;
- (void)removeClientConnection:(id)a0;

@end
