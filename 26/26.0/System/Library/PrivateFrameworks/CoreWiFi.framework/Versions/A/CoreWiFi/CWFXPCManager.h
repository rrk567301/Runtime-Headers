@class CWFXPCRequestProxy, NSString, CWFPrivateMACManager, CWFAutoJoinManager, NSSet, NSObject, NSMutableArray, RBSProcessMonitor, NSMutableSet;
@protocol CWFXPCManagerDelegate, OS_dispatch_queue;

@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate> {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableArray *_mutableXPCListeners;
    CWFXPCRequestProxy *_XPCRequestProxy;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processMonitorPIDs;
}

@property (retain) id<CWFXPCManagerDelegate> delegate;
@property (copy) NSSet *supportedRequestTypes;
@property (readonly) CWFAutoJoinManager *autoJoinManager;
@property (readonly) CWFPrivateMACManager *privateMACManager;
@property (copy) id /* block */ allowCloudSyncableNetworkHandler;
@property (copy) id /* block */ allowNearbySyncableNetworkHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendXPCEvent:(id)a0 reply:(id /* block */)a1;
- (void)invalidate;
- (id)__wifiUserAgentXPCConnection;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (void)suspend;
- (void)XPCListener:(id)a0 addedXPCConnection:(id)a1;
- (void)resume;
- (id)init;
- (void)XPCRequestProxy:(id)a0 sendXPCEvent:(id)a1 reply:(id /* block */)a2;
- (void)__updateProcessMonitorConfiguration;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)XPCListener:(id)a0 invalidatedXPCConnection:(id)a1;
- (void)setTargetQueue:(id)a0 requestType:(long long)a1 interfaceName:(id)a2;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (id)registeredActivities;
- (id)endpointWithServiceType:(long long)a0;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 updatedRegisteredEventIDs:(id)a2;
- (id)localXPCClientWithServiceType:(long long)a0;
- (void)activate;
- (id)initWithServiceTypes:(id)a0;
- (id)privateMACManager;
- (id)registeredEventIDs;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (void)XPCRequestProxy:(id)a0 invalidatedXPCConnection:(id)a1;
- (void).cxx_destruct;

@end
