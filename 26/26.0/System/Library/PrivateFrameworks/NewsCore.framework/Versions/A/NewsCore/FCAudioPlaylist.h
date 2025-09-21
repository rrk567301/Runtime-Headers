@class NSArray, NSMutableDictionary, NSOrderedSet, NSDate, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;
@property (readonly, nonatomic) NSDate *modificationDate;

+ (long long)commandQueueUrgency;
+ (id)desiredKeys;
+ (id)commandStoreFileName;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (BOOL)requiresBatchedFirstSync;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;

- (void)loadLocalCachesFromStore;
- (void)save;
- (id)recordsForRestoringZoneName:(id)a0;
- (BOOL)containsArticleID:(id)a0;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (id)localStoreMigrator;
- (void)removeArticleID:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (void)addObserver:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (id)dateAddedForArticleID:(id)a0;
- (void).cxx_destruct;

@end
