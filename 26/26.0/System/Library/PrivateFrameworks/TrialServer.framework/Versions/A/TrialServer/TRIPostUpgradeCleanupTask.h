@class NSString, NSArray, NSMutableSet, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRIPostUpgradeCleanupTask : TRIBaseTask <TRITask> {
    NSMutableSet *_invalidExperimentDeployments;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)task;
+ (id)parseFromData:(id)a0;

- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_activeRolloutIsCompatible:(id)a0 upgradeNCVs:(id)a1 downloadNCVs:(id)a2;
- (BOOL)_migrateToGlobalAssetStoreIfNeededUsingPaths:(id)a0;
- (BOOL)_migrateTreatmentsFolderIfNeededUsingContext:(id)a0;
- (id)_nextTasksForRunStatus:(int)a0;
- (BOOL)_removePromotionsUsingPaths:(id)a0;
- (BOOL)_validateExperimentDescriptorsWithNamespaceCompatibilityVersions:(id)a0 database:(id)a1;
- (BOOL)_validateRolloutNamespaceNCVs:(id)a0 downloadNCVs:(id)a1 context:(id)a2;

@end
