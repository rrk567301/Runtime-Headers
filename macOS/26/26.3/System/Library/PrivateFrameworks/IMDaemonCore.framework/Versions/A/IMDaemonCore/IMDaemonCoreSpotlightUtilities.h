@class IMSpotlightClientState, NSObject;
@protocol OS_dispatch_queue;

@interface IMDaemonCoreSpotlightUtilities : NSObject

@property (class, readonly, nonatomic) IMSpotlightClientState *currentClientState;
@property (class, readonly, nonatomic) BOOL needsDeferredIndexing;
@property (class, readonly, nonatomic) BOOL needsReindexing;
@property (class, readonly, nonatomic) long long lastIndexedRowID;
@property (class, readonly, nonatomic) long long batchIndexingIntervalBagValue;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *spotlightIndexQueue;

+ (BOOL)_needsReindexingDueToInvalidClientState;
+ (BOOL)_needsReindexingDueToVersionMismatch;
+ (void)stageIndexingDeletionForMigrationIfNeededWithCompletion:(id /* block */)a0;

@end
