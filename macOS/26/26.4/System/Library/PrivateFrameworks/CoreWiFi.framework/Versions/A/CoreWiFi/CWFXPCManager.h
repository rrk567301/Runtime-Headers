@class CWFXPCRequestProxy, NSString, CWFPrivateMACManager, RBSProcessMonitor, CWFAutoJoinManager, NSSet, NSMutableSet, NSObject, NSMutableArray, CLLocation, CWFWiFiNetworkSharingManager, CWFScanResult;
@protocol CWFXPCManagerDelegate, OS_dispatch_queue;

@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate> {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableArray *_mutableXPCListeners;
    CWFXPCRequestProxy *_XPCRequestProxy;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processMonitorPIDs;
    NSMutableSet *_processMonitorBundleIDs;
}

@property (retain) id<CWFXPCManagerDelegate> delegate;
@property (copy) NSSet *supportedRequestTypes;
@property (readonly) CWFAutoJoinManager *autoJoinManager;
@property (readonly) CWFAutoJoinManager *autoJoinManagerCached;
@property (readonly) CWFPrivateMACManager *privateMACManager;
@property (readonly) CWFWiFiNetworkSharingManager *wifiNetworkSharingManager;
@property (copy) CLLocation *location;
@property (copy) CWFScanResult *associatedNetwork;
@property (copy) id /* block */ allowCloudSyncableNetworkHandler;
@property (copy) id /* block */ allowNearbySyncableNetworkHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendXPCEvent:(id)a0 reply:(id /* block */)a1;
- (id)privateMACManager;
- (void)setDurationForJoinPMAssertion:(double)a0;
- (id)registeredActivities;
- (id)registeredEventIDs;
- (void)resume;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 completedXPCRequest:(id)a2;
- (void)activate;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 updatedRegisteredEventIDs:(id)a2;
- (id)localXPCClientWithServiceType:(long long)a0;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 updatedProcessState:(id)a2;
- (id)__wifiNetworkSharingAppexXPCConnections;
- (void)XPCListener:(id)a0 invalidatedXPCConnection:(id)a1;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (id)endpointWithServiceType:(long long)a0;
- (id)__wifiNetworkSharingUIServiceXPCConnection;
- (id)__wifiUserAgentXPCConnection;
- (void)XPCRequestProxy:(id)a0 sendXPCEvent:(id)a1 reply:(id /* block */)a2;
- (void)suspend;
- (void)XPCRequestProxy:(id)a0 invalidatedXPCConnection:(id)a1;
- (id)initWithServiceTypes:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)__updateProcessStateForXPCConnection:(id)a0;
- (void)XPCListener:(id)a0 addedXPCConnection:(id)a1;
- (void)__updateProcessMonitorConfiguration;
- (id)__wifiNetworkSharingAppXPCConnectionWithBundleID:(id)a0;
- (void)setTargetQueue:(id)a0 requestType:(long long)a1 interfaceName:(id)a2;

@end
