@interface PLSpotlightProgressManager : NSObject

+ (id)lastKnownSystemPhotoLibraryPath;
+ (char)_addSearchableItemIdentifiers:(id)a0 operationType:(unsigned long long)a1 forPhotoLibraryPathManager:(id)a2 isRetry:(char)a3;
+ (id)_minimumScheduledDateForNextReindexRetry;
+ (id)_readProgressFromDiskForPhotoLibraryPathManager:(id)a0;
+ (char)_shouldRetryReindexWithScheduledDateOf:(id)a0;
+ (char)_shouldRetryRequestWithMostRecentAttemptOf:(id)a0;
+ (id)_storageKeyForOperationType:(unsigned long long)a0;
+ (id)_updateFailureCountsForSearchableItemIdentifiers:(id)a0 shouldIncrementCounts:(char)a1 forPhotoLibraryPathManager:(id)a2;
+ (char)_writeProgressToDisk:(id)a0 forPhotoLibraryPathManager:(id)a1;
+ (char)addSearchableItemIdentifiers:(id)a0 forOperationType:(unsigned long long)a1 forPhotoLibraryPathManager:(id)a2;
+ (char)deleteSpotlightProgressForPhotoLibraryPathManager:(id)a0;
+ (char)didPreviouslySetSpotlightNeedsIndexRebuild;
+ (char)removeSearchableItemIdentifiers:(id)a0 forPhotoLibraryPathManager:(id)a1;
+ (char)setSpotlightIndexNeedsReindexing:(char)a0 forPhotoLibraryPathManager:(id)a1;
+ (void)setUniversalSearchEligibility:(char)a0 systemPhotoLibraryPath:(id)a1 systemPhotoLibraryDatabaseUUID:(id)a2 needsSpotlightIndexDrop:(char)a3 needsSpotlightIndexRebuild:(char)a4;
+ (char)shouldPerformSpotlightOperationOfType:(unsigned long long)a0 withSearchableItemIdentifiers:(id)a1 photoLibraryPathManager:(id)a2;
+ (char)shouldPerformSpotlightOperationsWithPhotoLibraryPathManager:(id)a0;
+ (char)shouldReindexSpotlightIndexForPhotoLibraryPathManager:(id)a0;
+ (char)shouldRetrySpotlightIndexDropForUniversalSearchEligibilityChange;
+ (char)spotlightOperationCompletedForOperationType:(unsigned long long)a0 withSearchableIdentifiers:(id)a1 forPhotoLibraryPathManager:(id)a2 success:(char)a3;
+ (void)spotlightProgressForPhotoLibraryPathManager:(id)a0 completion:(id /* block */)a1;
+ (char)spotlightResetOperationCompletedForPhotoLibraryPathManager:(id)a0 success:(char)a1;
+ (char)universalSearchEligibilityDidChangeForSPLWithDatabaseUUID:(id)a0 currentSPLPath:(id)a1 currentEligibility:(char)a2;

@end
