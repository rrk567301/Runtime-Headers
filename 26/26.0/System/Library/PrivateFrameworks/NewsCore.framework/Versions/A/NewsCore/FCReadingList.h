@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCReadingList : FCPrivateDataController {
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}

+ (long long)commandQueueUrgency;
+ (id)desiredKeys;
+ (id)commandStoreFileName;
+ (BOOL)requiresBatchedFirstSync;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;

- (void)addArticleToReadingList:(id)a0;
- (void)loadLocalCachesFromStore;
- (BOOL)shouldHideHeadline:(id)a0;
- (id)allNonConsumedArticleIDs;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)a0;
- (BOOL)isArticleOnReadingList:(id)a0;
- (id)dateArticleWasAdded:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)addArticleToReadingList:(id)a0 eventInitiationLevel:(long long)a1 origin:(unsigned long long)a2;
- (void)addObserver:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)clearArticlesFromReadingList;
- (id)allSortedArticleIDsInReadingList;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)a0;
- (void)removeArticleFromReadingList:(id)a0;

@end
