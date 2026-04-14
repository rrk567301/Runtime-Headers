@class FCCloudContext, NSMutableDictionary, NSDictionary, FCMTWriterLock;

@interface FCPuzzleHistory : FCPrivateDataController {
    NSMutableDictionary *_itemsByPuzzleID;
    FCCloudContext *_cloudContext;
    NSDictionary *_puzzleTypeTraitsDict;
    FCMTWriterLock *_itemsLock;
}

@property BOOL allowLowerProgressOnCompletedPuzzles;

+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedFirstSync;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)addPuzzleToPuzzleHistory:(id)a0 puzzleTypeID:(id)a1;
- (id)allSortedPuzzleIDsSinceLastPlayedDate:(id)a0;
- (id)datePuzzleWasLastPlayed:(id)a0;
- (BOOL)hasPuzzleBeenCompleted:(id)a0;
- (BOOL)hasPuzzleEverBeenCompleted:(id)a0;
- (BOOL)isPuzzleHistoryEmpty;
- (BOOL)isPuzzleInPuzzleHistory:(id)a0;
- (id)newestNotCompletedPuzzleIDForPuzzleTypeID:(id)a0 excludingPuzzleIDs:(id)a1;
- (id)puzzleHistoryItemForPuzzleID:(id)a0;
- (void)removePuzzleFromPuzzleHistory:(id)a0;
- (void)setFirstCompletedDate:(id)a0 forPuzzleID:(id)a1 puzzleTypeID:(id)a2;
- (void)setPuzzleTypeTraits:(id)a0;
- (id)sortedPuzzleIDsForPuzzleTypeID:(id)a0 sinceLastPlayedDate:(id)a1;
- (void)updatePuzzle:(id)a0 difficulty:(id)a1 publishDate:(id)a2 behaviorFlags:(id)a3;
- (void)updatePuzzle:(id)a0 puzzleTypeID:(id)a1 progressData:(id)a2 progressLevel:(long long)a3 score:(id)a4 scoreType:(id)a5 rankID:(id)a6 usedReveal:(BOOL)a7 playDuration:(long long)a8 isSolved:(BOOL)a9 progressMovesDescription:(id)a10 difficulty:(id)a11 publishDate:(id)a12 behaviorFlags:(id)a13;

@end
