@class NSHashTable, NSString, _DKSyncPeerStatusTracker, NSMutableDictionary, APSConnection, CKContainer, NSMutableSet, _DKThrottledActivity, CKServerChangeToken, _CDPeriodicSchedulerJob, NSOperation;
@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate> {
    BOOL _started;
    id<_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _CDPeriodicSchedulerJob *_updateSourceDeviceIdentifiersPeriodicJob;
    BOOL _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    APSConnection *_connection;
    double _updateSourceDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableDictionary *_recordZonesByZoneID;
    BOOL _databaseChangesExist;
    BOOL _isPrewarmed;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    NSMutableSet *_zoneIDsWithUnrecoverableDecryptionErrors;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    BOOL _available;
    id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)zoneIDWithDeviceID:(id)a0;
+ (id)mySyncZoneID;
+ (id)deviceIDFromZoneID:(id)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)start;
- (void)setFetchDelegate:(id)a0;
- (long long)transportType;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)_cloudSyncAvailabilityDidChange:(id)a0;
- (void)updateStorageWithAddedEvents:(id)a0 deletedEventIDs:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)setHasAdditionsFlag:(BOOL)a0 forPeer:(id)a1;
- (void)setHasDeletionsFlag:(BOOL)a0 forPeer:(id)a1;
- (void)fetchEventsFromPeer:(id)a0 windows:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 fetchOrder:(long long)a4 highPriority:(BOOL)a5 completion:(id /* block */)a6;
- (void)cancelOutstandingOperations;
- (BOOL)hasAdditionsFlagForPeer:(id)a0;
- (BOOL)hasDeletionsFlagForPeer:(id)a0;
- (void)clearPrewarmedFlag;
- (void)prewarmFetchWithCompletion:(id /* block */)a0;
- (void)fetchDeletedEventIDsFromPeer:(id)a0 sinceDate:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 highPriority:(BOOL)a4 completion:(id /* block */)a5;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;

@end
