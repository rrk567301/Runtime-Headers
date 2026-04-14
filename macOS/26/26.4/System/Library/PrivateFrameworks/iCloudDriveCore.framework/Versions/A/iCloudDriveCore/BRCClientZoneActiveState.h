@class NSMutableDictionary, brc_task_tracker, BRCDeadlineSource, BRCSyncDownOperation, NSDate, NSObject, NSMutableIndexSet, NSMutableArray, BRMangledID, CKOperationGroup, BRCSyncOperationThrottle, BRCSyncOperationBackoffRatio, BRCSyncUpOperation, BRCFetchRecentAndFavoriteDocumentsOperation, NSString, BRCSyncBudgetThrottle, BRTimer, NSArray, BRCThrottle, NSError;
@protocol OS_dispatch_source, NSObject;

@interface BRCClientZoneActiveState : NSObject {
    BRMangledID *_mangledID;
    _Atomic unsigned int _syncState;
}

@property (retain, nonatomic) brc_task_tracker *taskTracker;
@property (nonatomic) unsigned long long requestID;
@property (retain, nonatomic) BRCSyncUpOperation *syncUpOperation;
@property (retain, nonatomic) BRCSyncDownOperation *syncDownOperation;
@property (retain, nonatomic) NSError *lastSyncUpError;
@property (retain, nonatomic) NSError *lastSyncDownError;
@property (nonatomic) BOOL lastSyncUpErrorWasOnChainedItem;
@property (retain, nonatomic) CKOperationGroup *syncDownGroup;
@property (retain, nonatomic) BRCSyncOperationThrottle *syncUpThrottle;
@property (retain, nonatomic) BRCSyncBudgetThrottle *syncUpBudget;
@property (retain, nonatomic) BRCSyncOperationBackoffRatio *syncUpBackoffRatio;
@property (retain, nonatomic) BRCSyncOperationThrottle *syncDownThrottle;
@property (retain, nonatomic) BRCDeadlineSource *syncDeadlineSource;
@property (nonatomic) long long syncUpRetryAfter;
@property (nonatomic) id syncDeadlineSourceResumer;
@property (retain, nonatomic) BRCThrottle *serverStitchingOperationThrottle;
@property (retain, nonatomic) BRCThrottle *locateRecordsOperationThrottle;
@property (retain, nonatomic) NSMutableArray *blockedOperationsOnInitialSync;
@property (retain, nonatomic) NSMutableDictionary *runningListOperations;
@property (retain, nonatomic) NSMutableDictionary *recursiveListOperations;
@property (retain, nonatomic) NSMutableDictionary *fetchParentOperations;
@property (retain, nonatomic) NSMutableDictionary *locateRecordOperations;
@property (retain, nonatomic) BRCFetchRecentAndFavoriteDocumentsOperation *fetchRecentsOperation;
@property (nonatomic) BOOL invokeFetchRecentsOperation;
@property (retain, nonatomic) NSMutableIndexSet *appliedTombstoneRanks;
@property (nonatomic) long long lastInsertedRank;
@property (retain, nonatomic) NSDate *lastSyncDownDate;
@property (retain, nonatomic) NSDate *lastAttemptedSyncDownDate;
@property (retain, nonatomic) NSMutableArray *nextSyncDownBarriers;
@property (retain, nonatomic) NSMutableArray *currentSyncDownBarriers;
@property (retain, nonatomic) NSMutableArray *nextIdleHandlers;
@property (retain, nonatomic) NSMutableArray *syncDownDependencies;
@property (retain, nonatomic) NSMutableArray *allItemsDidUploadTrackers;
@property (retain, nonatomic) NSMutableArray *outOfBandSyncOperations;
@property (retain, nonatomic) NSMutableArray *syncDownCompletionHandlers;
@property (retain, nonatomic) NSMutableArray *directoriesCreatedLastSyncUp;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *resetTimer;
@property (retain, nonatomic) NSMutableDictionary *syncDownBlockToPerformForBookmarkData;
@property (nonatomic) BOOL shouldShowiCloudDriveAppInstallationNotification;
@property (retain, nonatomic) NSMutableArray *faultsLiveBarriers;
@property (nonatomic) float syncUpBatchSizeMultiplier;
@property (retain, nonatomic) id<NSObject> hasWorkDidUpdateObserver;
@property (retain, nonatomic) BRTimer *resetAfterAppUninstallTimer;
@property (retain, nonatomic) NSString *osNameRequiredToSync;
@property (retain, nonatomic) NSArray *syncThrottles;
@property (retain, nonatomic) NSMutableDictionary *onDiskBlockToPerformForItemID;
@property (retain, nonatomic) NSMutableDictionary *downloadedBlockToPerformForItemID;
@property (retain, nonatomic) NSMutableDictionary *syncDownBlockToPerformForItemID;
@property (retain, nonatomic) NSMutableDictionary *locateBlocksToPerformForRecordID;

- (unsigned long long)allocateSyncUpRequestID;
- (unsigned int)syncUpBatchSize;
- (void).cxx_destruct;
- (unsigned int)syncState;
- (id)description;
- (void)resetSyncBudgetAndThrottle;
- (void)close;
- (id)initWithMangledID:(id)a0;
- (void)addToPlist:(id)a0;
- (void)decreaseSyncUpBatchSizeAfterError;
- (unsigned int)fetchAndClearSyncStateBits:(unsigned int)a0;
- (unsigned int)fetchAndSetSyncStateBits:(unsigned int)a0;
- (void)increaseSyncUpBatchSizeAfterSuccess;
- (void)markRequestIDAcked;
- (void)updateFromPlist:(id)a0;

@end
