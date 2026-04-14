@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCPuzzleHistory : FCPrivateDataController {
    NSMutableDictionary *_itemsByPuzzleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}

+ (id)desiredKeys;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)addPuzzleToPuzzleHistory:(id)a0 puzzleTypeID:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (id)allSortedPuzzleIDsSinceLastPlayedDate:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)datePuzzleWasLastPlayed:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)hasPuzzleBeenCompleted:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)isPuzzleHistoryEmpty;
- (BOOL)isPuzzleInPuzzleHistory:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)puzzleHistoryItemForPuzzleID:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removePuzzleFromPuzzleHistory:(id)a0;
- (id)sortedPuzzleIDsForPuzzleTypeID:(id)a0 sinceLastPlayedDate:(id)a1;
- (void)updatePuzzle:(id)a0 puzzleTypeID:(id)a1 progressData:(id)a2 progressLevel:(long long)a3 playDuration:(long long)a4 isSolved:(BOOL)a5;

@end
