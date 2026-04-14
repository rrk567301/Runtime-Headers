@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCReadingList : FCPrivateDataController {
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}

+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedFirstSync;
+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (BOOL)requiresPushNotificationSupport;

- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addArticleToReadingList:(id)a0 eventInitiationLevel:(long long)a1 origin:(unsigned long long)a2;
- (id)allSortedArticleIDsInReadingList;
- (BOOL)shouldHideHeadline:(id)a0;
- (void)clearArticlesFromReadingList;
- (BOOL)isArticleOnReadingList:(id)a0;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)a0;
- (void)addObserver:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)dateArticleWasAdded:(id)a0;
- (id)allNonConsumedArticleIDs;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)a0;
- (void)removeArticleFromReadingList:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)addArticleToReadingList:(id)a0;

@end
