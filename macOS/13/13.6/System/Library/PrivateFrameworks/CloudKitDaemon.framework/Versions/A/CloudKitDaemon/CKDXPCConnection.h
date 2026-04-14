@class NSXPCConnection, NSHashTable, CKCoalescer, NSArray, NSString, NSMutableDictionary, NSOperationQueue, CKDProcessScopedClientProxy, NSPointerArray;

@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKPropertiesDescription, CKDXPCConnectionMuxer>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) unsigned long long keepAlive;
@property (readonly, nonatomic) CKCoalescer *activityCoalescer;
@property (retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy;
@property (retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference;
@property (retain, nonatomic) NSHashTable *sharedContainers;
@property (retain, nonatomic) NSPointerArray *allContainerPointers;
@property (retain, nonatomic) NSOperationQueue *systemAvailableQueue;
@property (readonly, nonatomic) NSArray *allContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)initWithXPCConnection:(id)a0;
- (void)tearDown;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDaemonTestServerManagerProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)noteClientProcessScopedMetadata:(id)a0;
- (void)allowToClose;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)a0;
- (id)containerFromSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 outError:(id *)a2;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)keepOpen;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)a0;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;

@end
