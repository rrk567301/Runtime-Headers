@class _DKSyncCloudKitKnowledgeStorage;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>

@property (retain) _DKSyncCloudKitKnowledgeStorage *common;
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;
@property (getter=isAvailable) BOOL available;

+ (id)sharedInstance;

- (id)name;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancelOutstandingOperations;
- (BOOL)hasAdditionsFlagForPeer:(id)a0;
- (void)setHasAdditionsFlag:(BOOL)a0 forPeer:(id)a1;
- (BOOL)hasDeletionsFlagForPeer:(id)a0;
- (void)setHasDeletionsFlag:(BOOL)a0 forPeer:(id)a1;
- (void)clearPrewarmedFlag;
- (void)prewarmFetchWithCompletion:(id /* block */)a0;
- (void)fetchEventsFromPeer:(id)a0 windows:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 fetchOrder:(long long)a4 highPriority:(BOOL)a5 completion:(id /* block */)a6;
- (void)fetchDeletedEventIDsFromPeer:(id)a0 sinceDate:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 highPriority:(BOOL)a4 completion:(id /* block */)a5;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)setFetchDelegate:(id)a0;
- (void)updateStorageWithAddedEvents:(id)a0 deletedEventIDs:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;
- (long long)transportType;

@end
