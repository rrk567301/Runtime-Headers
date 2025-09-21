@class NSDate, CPLEngineIDMapping, NSArray, NSSet, CPLChangeBatch, NSDictionary, NSMutableDictionary, CPLEngineStore, NSMutableSet, CPLEngineScopeStorage, CPLPushChangeTasks, NSMutableArray;
@protocol CPLEngineIDMapping;

@interface CPLPushSessionTracker : NSObject {
    CPLEngineScopeStorage *_scopes;
    id<CPLEngineIDMapping> _optimisticIDMapping;
    CPLEngineIDMapping *_realIDMapping;
    NSMutableDictionary *_incomingBatchRecordPerScopedIdentifiers;
    NSMutableDictionary *_storedClientRecords;
    NSMutableDictionary *_storedCloudRecords;
    NSMutableArray *_addedRecords;
    NSMutableArray *_updatedRecords;
    NSMutableArray *_deletedRecordScopedIdentifiers;
    NSMutableArray *_changesWithResourceChanges;
    NSMutableDictionary *_fullRecords;
    NSMutableDictionary *_resourcesToUpload;
    NSMutableSet *_validScopeIdentifiers;
    NSMutableSet *_invalidScopeIdentifiers;
    NSMutableArray *_changesWithMissingIDMapping;
}

@property (readonly, nonatomic) CPLChangeBatch *incomingBatch;
@property (readonly, nonatomic) CPLEngineStore *store;
@property (readonly, nonatomic) CPLChangeBatch *expandedBatch;
@property (readonly, nonatomic) NSMutableSet *unquarantinedRecordScopedIdentifiers;
@property (readonly, nonatomic) CPLPushChangeTasks *pushChangeTasks;
@property (readonly, nonatomic) BOOL hasPushChangeTasks;
@property (readonly, nonatomic) CPLChangeBatch *diffedBatch;
@property (readonly, nonatomic) NSSet *deletedScopeIdentifiers;
@property (readonly, nonatomic) NSArray *addedRecords;
@property (readonly, nonatomic) NSArray *updatedRecords;
@property (readonly, nonatomic) NSArray *deletedRecordScopedIdentifiers;
@property (readonly, nonatomic) NSDictionary *resourcesToUpload;
@property (readonly, nonatomic) NSMutableDictionary *recordWithStatusChangesToNotify;
@property (readonly, nonatomic) NSArray *revertedChanges;
@property (readonly, nonatomic) unsigned long long ignoredRecordCount;
@property (readonly, nonatomic) BOOL diffedBatchCanLowerQuota;
@property (copy, nonatomic) NSDate *now;
@property (readonly, nonatomic) BOOL expandHasBeenSuccessful;
@property (readonly, nonatomic) BOOL diffHasBeenSuccessful;
@property (readonly, nonatomic) BOOL applyHasBeenSuccessful;

+ (BOOL)notifyClientOfStore:(id)a0 ofStatusChanges:(id)a1 error:(id *)a2;

- (BOOL)checkScopeIdentifier:(id)a0;
- (void)enumerateDiffWithBlock:(id /* block */)a0;
- (BOOL)hasClientRecordWithLocalScopedIdentifier:(id)a0;
- (id)_resourceIdentitiesFromChange:(id)a0;
- (BOOL)computeExpandedBatchWithError:(id *)a0;
- (id)deletedRecordIdentifiers;
- (void)acknowledgeNewClientRecord:(id)a0 withScopedIdentifier:(id)a1;
- (BOOL)hasCloudRecordWithLocalScopedIdentifier:(id)a0;
- (id)storedCloudRecordWithLocalScopedIdentifier:(id)a0;
- (id)storedClientRecordWithLocalScopedIdentifier:(id)a0;
- (id)initWithIncomingBatch:(id)a0 store:(id)a1 error:(id *)a2;
- (id)_realChangeFromChange:(id)a0 comparedToStoredRecord:(id)a1 changeType:(unsigned long long)a2;
- (BOOL)cleanupWithError:(id *)a0;
- (BOOL)shouldCancelSyncSessionTryingToUploadChange:(id)a0;
- (BOOL)computeDiff;
- (BOOL)knowsClientRecordWithScopedIdentifier:(id)a0;
- (id)enqueuedOrStoredRecordWithLocalScopedIdentifier:(id)a0;
- (BOOL)notifyClientOfStatusChangesIfNecessaryWithError:(id *)a0;
- (void).cxx_destruct;
- (id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)a0;

@end
