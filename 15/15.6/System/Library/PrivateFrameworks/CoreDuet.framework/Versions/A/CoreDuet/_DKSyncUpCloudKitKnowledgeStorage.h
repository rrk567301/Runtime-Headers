@class _DKSyncCloudKitKnowledgeStorage;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>

@property (retain) _DKSyncCloudKitKnowledgeStorage *common;
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;
@property (getter=isAvailable) char available;

+ (id)sharedInstance;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)start;
- (void)cancelOutstandingOperations;
- (void)clearPrewarmedFlag;
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
