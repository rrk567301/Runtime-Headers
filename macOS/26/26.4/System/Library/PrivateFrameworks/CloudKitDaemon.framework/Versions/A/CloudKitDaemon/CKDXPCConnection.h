@class NSDate, NSXPCConnection, NSHashTable, NSString, NSMutableDictionary, NSOperationQueue, CKDProcessScopedClientProxy, _TtC14CloudKitDaemon35CKDAdopterProcessScopedStateManager;

@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKPropertiesDescription, CKDXPCConnectionMuxer>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy;
@property (retain, nonatomic) _TtC14CloudKitDaemon35CKDAdopterProcessScopedStateManager *adopterProcessScopedStateManager;
@property (retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference;
@property (readonly, nonatomic) NSHashTable *containerProxies;
@property (retain, nonatomic) NSOperationQueue *unlockedSinceBootQueue;
@property (retain, nonatomic) NSOperationQueue *containerAvailableQueue;
@property (readonly, nonatomic) NSDate *connectionDate;
@property (readonly, nonatomic) NSHashTable *sharedContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CKStatusReportArray;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)a0;
- (id)initWithXPCConnection:(id)a0;
- (void)getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getSessionAcquisitionDaemonProxyCreatorForSessionAcquisitionSetupInfo:(id)a0 sessionAcquisitionClientProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAdopterProcessScopedDaemonProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (id)containerProxyFromSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 outError:(id *)a2;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)noteClientProcessScopedMetadata:(id)a0;
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)enumerateContainersUsingBlock:(id /* block */)a0;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)enumerateContainersWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 completionHandler:(id /* block */)a2;
- (id)redactedDescription;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)getDaemonTestServerManagerProxyCreatorWithCompletionHandler:(id /* block */)a0;

@end
