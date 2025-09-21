@class NSMutableDictionary, NSOperationQueue, RPCompanionLinkClient, NSObject, CWFNearbySyncNetwork;
@protocol OS_dispatch_queue;

@interface CWFNearbySyncManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    RPCompanionLinkClient *_rapportDiscoveryClient;
    int _cloudKeychainSyncStateNotifyToken;
    CWFNearbySyncNetwork *_nearbySyncNetwork;
    NSMutableDictionary *_nearbySyncRequestHistory;
    NSMutableDictionary *_cachedBBHStateMap;
    NSMutableDictionary *_cachedBBHTimestampMap;
    NSOperationQueue *_rapportRequestQueue;
}

@property unsigned char cloudKeychainEnabled;
@property unsigned char associationState;
@property BOOL activated;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) CWFNearbySyncNetwork *nearbySyncNetwork;
@property (copy) id /* block */ allowNearbySyncableNetworkHandler;
@property (copy) id /* block */ autoJoinAssistEventHandler;
@property (copy) id /* block */ restoredBackhaulEventHandler;
@property (copy) id /* block */ confirmBrokenBackhaulHandler;

- (void)invalidate;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (id)__rapportClientTargetingDevice:(id)a0;
- (void)__purgeBBHCache;
- (BOOL)__calloutToCheckIfNetworkIsSyncable:(id)a0;
- (void)__checkCloudKeychainSyncState;
- (BOOL)__deviceSupportsNearbyBBHConfirmRequests:(id)a0;
- (BOOL)__deviceSupportsNearbySyncRequests:(id)a0;
- (void)__handleAutoJoinAssistPayload:(id)a0 options:(id)a1;
- (void)__handleBrokenBackhaulRestoreEvent:(id)a0 options:(id)a1;
- (unsigned char)__isCloudKeychainEnabled;
- (id)__nearbyNetworkSyncRequestTimestampForDevice:(id)a0 network:(id)a1;
- (void)__respondToAutoJoinAssistRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)__respondToConfirmBrokenBackhaulRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)__respondToNeedsConnectivityRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)__sendAutoJoinAssistRequestToAllNearbyDevices;
- (void)__sendAutoJoinAssistRequestToNearbyDevice:(id)a0 retryCount:(unsigned long long)a1;
- (void)__sendBrokenBackhaulRestoreEventToAllNearbyDevices;
- (void)__sendBrokenBackhaulRestoreEventToNearbyDevice:(id)a0;
- (void)__sendConfirmBrokenBackhaulRequestToAllNearbyDevicesWithTimeout:(unsigned long long)a0 count:(unsigned long long)a1 network:(id)a2 minimumCacheTimestamp:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)__sendConfirmBrokenBackhaulRequestToNearbyDevice:(id)a0 timeout:(unsigned long long)a1 count:(unsigned long long)a2 network:(id)a3 minimumCacheTimestamp:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)__sendNeedsConnectivityRequestToAllNearbyDevices;
- (void)__sendNeedsConnectivityRequestToNearbyDevice:(id)a0 retryCount:(unsigned long long)a1;
- (void)__setupRapportDiscoveryClient;
- (void)__startMonitoringCloudKeychainSyncStateEvents;
- (void)__stopMonitoringCloudKeychainSyncStateEvents;
- (void)__updateNearbyNetworkSyncRequestTimestampForDevice:(id)a0 network:(id)a1;
- (void)nearbyConfirmBrokenBackhaulUsingTimeout:(unsigned long long)a0 count:(unsigned long long)a1 network:(id)a2 minimumCacheTimestamp:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)nearbySyncNetwork;
- (void)setNearbySyncNetwork:(id)a0;

@end
