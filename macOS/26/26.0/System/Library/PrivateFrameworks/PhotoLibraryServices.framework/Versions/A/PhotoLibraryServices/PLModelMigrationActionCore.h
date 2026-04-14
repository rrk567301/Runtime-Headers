@class NSString, PLCoreAnalyticsEventManager, PLPhotoLibraryPathManager, NSMutableDictionary, PLMigrationContext, PLModelMigrationHistory, NSProgress, PLFileBackedLogger;

@interface PLModelMigrationActionCore : NSObject <PLModelMigrationActionCore>

@property (retain) PLFileBackedLogger *logger;
@property (retain) NSProgress *progress;
@property (readonly) PLMigrationContext *migrationContext;
@property (readonly) unsigned short startingSchemaVersion;
@property (readonly) NSMutableDictionary *migrationContextUserInfo;
@property (readonly) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) NSString *actionName;
@property (readonly) PLModelMigrationHistory *migrationHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionDescription;
+ (long long)actionProgressWeight;
+ (id)shortenedMigrationActionClassName;

- (void)setup;
- (id)graphCache;
- (void).cxx_destruct;
- (id)cancellableDiscreteProgressWithTotalUnitCount:(long long)a0 pendingParentUnitCount:(long long)a1;
- (void)finalizeProgress;
- (id)initWithMigrationContext:(id)a0 logger:(id)a1 progress:(id)a2;
- (BOOL)isCancelledWithError:(id *)a0;
- (long long)saveWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
