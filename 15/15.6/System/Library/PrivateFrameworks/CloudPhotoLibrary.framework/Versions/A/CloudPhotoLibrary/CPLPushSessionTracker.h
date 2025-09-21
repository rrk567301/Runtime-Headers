@class NSDate, NSArray, NSMutableDictionary, CPLChangeBatch, NSDictionary, CPLEngineStore, NSMutableSet, CPLEngineScopeStorage, CPLPushChangeTasks, NSMutableArray;
@protocol CPLEngineIDMapping;

@interface CPLPushSessionTracker : NSObject {
    CPLEngineScopeStorage *_scopes;
    id<CPLEngineIDMapping> _idMapping;
    NSMutableDictionary *_incomingBatchRecordPerScopedIdentifiers;
    NSMutableDictionary *_storedClientRecords;
    NSMutableDictionary *_storedCloudRecords;
    NSMutableArray *_addedRecords;
    NSMutableArray *_updatedRecords;
    NSMutableArray *_deletedRecordScopedIdentifiers;
    NSMutableArray *_changesWithResourceChanges;
    NSMutableDictionary *_fullRecords;
    NSMutableDictionary *_resourcesToUpload;
    char _checkScopeIdentifier;
    NSMutableSet *_validScopeIdentifiers;
    NSMutableSet *_invalidScopeIdentifiers;
}

@property (readonly, nonatomic) CPLChangeBatch *incomingBatch;
@property (readonly, nonatomic) CPLEngineStore *store;
@property (readonly, nonatomic) CPLChangeBatch *expandedBatch;
@property (readonly, nonatomic) NSMutableSet *unquarantinedRecordScopedIdentifiers;
@property (readonly, nonatomic) CPLPushChangeTasks *pushChangeTasks;
@property (readonly, nonatomic) char hasPushChangeTasks;
@property (readonly, nonatomic) CPLChangeBatch *diffedBatch;
@property (readonly, nonatomic) NSArray *addedRecords;
@property (readonly, nonatomic) NSArray *updatedRecords;
@property (readonly, nonatomic) NSArray *deletedRecordScopedIdentifiers;
@property (readonly, nonatomic) NSDictionary *resourcesToUpload;
@property (readonly, nonatomic) NSMutableDictionary *recordWithStatusChangesToNotify;
@property (readonly, nonatomic) NSArray *revertedChanges;
@property (readonly, nonatomic) unsigned long long ignoredRecordCount;
@property (readonly, nonatomic) char diffedBatchCanLowerQuota;
@property (copy, nonatomic) NSDate *now;
@property (readonly, nonatomic) char expandHasBeenSuccessful;
@property (readonly, nonatomic) char diffHasBeenSuccessful;
@property (readonly, nonatomic) char applyHasBeenSuccessful;

+ (char)notifyClientOfStore:(id)a0 ofStatusChanges:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)_realChangeFromChange:(id)a0 comparedToStoredRecord:(id)a1 changeType:(unsigned long long)a2;
- (id)_resourceIdentitiesFromChange:(id)a0;
- (void)acknowledgeNewClientRecord:(id)a0 withScopedIdentifier:(id)a1;
- (char)checkScopeIdentifier:(id)a0;
- (char)computeDiff;
- (char)computeExpandedBatchWithError:(id *)a0;
- (id)deletedRecordIdentifiers;
- (id)enqueuedOrStoredRecordWithLocalScopedIdentifier:(id)a0;
- (void)enumerateDiffWithBlock:(id /* block */)a0;
- (char)hasClientRecordWithLocalScopedIdentifier:(id)a0;
- (char)hasCloudRecordWithLocalScopedIdentifier:(id)a0;
- (id)initWithIncomingBatch:(id)a0 store:(id)a1 error:(id *)a2;
- (char)knowsClientRecordWithScopedIdentifier:(id)a0;
- (char)notifyClientOfStatusChangesIfNecessaryWithError:(id *)a0;
- (id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)a0;
- (char)shouldCancelSyncSessionTryingToUploadChange:(id)a0;
- (id)storedClientRecordWithLocalScopedIdentifier:(id)a0;
- (id)storedCloudRecordWithLocalScopedIdentifier:(id)a0;

@end
