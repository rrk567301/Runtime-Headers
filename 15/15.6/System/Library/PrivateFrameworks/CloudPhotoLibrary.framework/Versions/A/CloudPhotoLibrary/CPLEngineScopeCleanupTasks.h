@class NSString, NSMutableArray, CPLPlatformObject;

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject> {
    long long _currentCleanupScopeIndex;
    NSMutableArray *_remainingStoragesToCleanup;
    char _shouldRequestACleanupToScheduler;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scopeTypeDescriptionForScopeType:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (char)hasCleanupTasks;
- (char)addCleanupTaskForScopeWithIndex:(long long)a0 scopeIdentifier:(id)a1 scopeType:(unsigned long long)a2 error:(id *)a3;
- (char)cleanupStepHasMore:(char *)a0 error:(id *)a1;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
