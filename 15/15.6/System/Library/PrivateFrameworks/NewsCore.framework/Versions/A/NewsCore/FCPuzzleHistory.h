@class FCCloudContext, NSMutableDictionary, NSDictionary, FCMTWriterLock;

@interface FCPuzzleHistory : FCPrivateDataController {
    NSMutableDictionary *_itemsByPuzzleID;
    FCCloudContext *_cloudContext;
    NSDictionary *_puzzleTypeTraitsDict;
    FCMTWriterLock *_itemsLock;
}

@property char allowLowerProgressOnCompletedPuzzles;

+ (id)desiredKeys;
+ (char)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (char)requiresBatchedSync;
+ (char)requiresHighPriorityFirstSync;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)addPuzzleToPuzzleHistory:(id)a0 puzzleTypeID:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (id)allSortedPuzzleIDsSinceLastPlayedDate:(id)a0;
- (char)canHelpRestoreZoneName:(id)a0;
- (id)datePuzzleWasLastPlayed:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (char)hasPuzzleBeenCompleted:(id)a0;
- (char)hasPuzzleEverBeenCompleted:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (char)isPuzzleHistoryEmpty;
- (char)isPuzzleInPuzzleHistory:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)puzzleHistoryItemForPuzzleID:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removePuzzleFromPuzzleHistory:(id)a0;
- (void)setFirstCompletedDate:(id)a0 forPuzzleID:(id)a1 puzzleTypeID:(id)a2;
- (void)setPuzzleTypeTraits:(id)a0;
- (id)sortedPuzzleIDsForPuzzleTypeID:(id)a0 sinceLastPlayedDate:(id)a1;
- (void)updatePuzzle:(id)a0 difficulty:(id)a1 publishDate:(id)a2 behaviorFlags:(id)a3;
- (void)updatePuzzle:(id)a0 puzzleTypeID:(id)a1 progressData:(id)a2 progressLevel:(long long)a3 score:(id)a4 rankID:(id)a5 usedReveal:(char)a6 playDuration:(long long)a7 isSolved:(char)a8 difficulty:(id)a9 publishDate:(id)a10 behaviorFlags:(id)a11;

@end
