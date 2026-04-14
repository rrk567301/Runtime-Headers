@class NSArray, NSDictionary, CWFKeyValueStore, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFCloudSyncManager : NSObject {
    CWFKeyValueStore *_cloudKVS;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _cloudKeychainSyncStateNotifyToken;
    int _keychainChangedNotifyToken;
    NSObject<OS_dispatch_source> *_checkKeychainTimer;
    unsigned long long _keychainChangeCounter;
    BOOL _waitingForNextKeychainChangeEvent;
    unsigned long long _checkKeychainTimestamp;
    NSMutableDictionary *_waitingForKeychainCounterMap;
    NSMutableDictionary *_waitingForKeychainNetworkMap;
}

@property unsigned char cloudKeychainEnabled;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, copy) NSDictionary *cloudKVS;
@property (readonly, copy) NSArray *cloudNetworks;
@property (copy) id /* block */ allowCloudSyncableNetworkHandler;
@property (copy) id /* block */ rememberLocalNetworkHandler;
@property (copy) id /* block */ forgetLocalNetworkHandler;
@property (copy) id /* block */ fetchAllLocalNetworksHandler;
@property (copy) id /* block */ hasKeychainPasswordHandler;

- (void)invalidate;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (id)__localDeviceVersionDescription;
- (BOOL)__calloutToCheckForKeychainPasswordWithNetworkProfile:(id)a0 error:(id *)a1;
- (BOOL)__calloutToCheckIfNetworkIsSyncable:(id)a0;
- (id)__calloutToFetchAllLocalNetworksAndReturnError:(id *)a0;
- (void)__checkCloudKeychainSyncState;
- (void)__checkWaitingForKeychainPasswordList;
- (id)__cloudKeyForNetworkProfile:(id)a0;
- (id)__cloudNetworkProfiles;
- (void)__handleCloudKVSChangedKeys:(id)a0;
- (void)__handleKeychainChangeEvent;
- (unsigned char)__isCloudKeychainEnabled;
- (id)__localDeviceModel;
- (void)__resetCheckKeychainCounterForRecentlyJoinedNetworks;
- (void)__startMonitoringCloudKeychainSyncStateEvents;
- (void)__startMonitoringKeychainChangeEvents;
- (void)__stopMonitoringCloudKeychainSyncStateEvents;
- (void)__stopMonitoringKeychainChangeEvents;
- (void)__synchronizeWithLocalNetworks;
- (BOOL)__updateCloudNetwork:(id)a0 error:(id *)a1;
- (BOOL)forgetCloudNetwork:(id)a0 error:(id *)a1;
- (BOOL)rememberCloudNetwork:(id)a0 error:(id *)a1;

@end
