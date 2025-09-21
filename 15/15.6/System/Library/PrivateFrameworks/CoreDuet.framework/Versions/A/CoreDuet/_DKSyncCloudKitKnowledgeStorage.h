@class NSHashTable, NSString, _DKSyncPeerStatusTracker, NSMutableDictionary, APSConnection, CKContainer, NSMutableSet, _DKThrottledActivity, CKServerChangeToken, _CDPeriodicSchedulerJob, NSOperation;
@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate> {
    char _started;
    id<_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _CDPeriodicSchedulerJob *_updateSourceDeviceIdentifiersPeriodicJob;
    char _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    APSConnection *_connection;
    double _updateSourceDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableDictionary *_recordZonesByZoneID;
    char _databaseChangesExist;
    char _isPrewarmed;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    NSMutableSet *_zoneIDsWithUnrecoverableDecryptionErrors;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    char _available;
    id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceIDFromZoneID:(id)a0;
+ (id)mySyncZoneID;
+ (id)zoneIDWithDeviceID:(id)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)start;
- (void)_cloudSyncAvailabilityDidChange:(id)a0;
- (void)cancelOutstandingOperations;
- (void)clearPrewarmedFlag;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)a0 highPriority:(char)a1 completion:(id /* block */)a2;
- (void)fetchDeletedEventIDsFromPeer:(id)a0 sinceDate:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 highPriority:(char)a4 completion:(id /* block */)a5;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)a0 highPriority:(char)a1 completion:(id /* block */)a2;
- (void)fetchEventsFromPeer:(id)a0 windows:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 fetchOrder:(long long)a4 highPriority:(char)a5 completion:(id /* block */)a6;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(char)a1 completion:(id /* block */)a2;
- (char)hasAdditionsFlagForPeer:(id)a0;
- (char)hasDeletionsFlagForPeer:(id)a0;
- (void)prewarmFetchWithCompletion:(id /* block */)a0;
- (void)setFetchDelegate:(id)a0;
- (void)setHasAdditionsFlag:(char)a0 forPeer:(id)a1;
- (void)setHasDeletionsFlag:(char)a0 forPeer:(id)a1;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(id)a0 deletedEventIDs:(id)a1 highPriority:(char)a2 completion:(id /* block */)a3;

@end
