@class NSString, NSMutableArray, CPLPlatformObject;

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject> {
    long long _currentCleanupScopeIndex;
    NSMutableArray *_remainingStoragesToCleanup;
    BOOL _shouldRequestACleanupToScheduler;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scopeTypeDescriptionForScopeType:(unsigned long long)a0;

- (BOOL)hasCleanupTasks;
- (BOOL)cleanupStepHasMore:(BOOL *)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)scopeType;
- (void).cxx_destruct;
- (void)writeTransactionDidSucceed;
- (BOOL)addCleanupTaskForScopeWithIndex:(long long)a0 scopeIdentifier:(id)a1 scopeType:(unsigned long long)a2 error:(id *)a3;
- (void)writeTransactionDidFail;

@end
