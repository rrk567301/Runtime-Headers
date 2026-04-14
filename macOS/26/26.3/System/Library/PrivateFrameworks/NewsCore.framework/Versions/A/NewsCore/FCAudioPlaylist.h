@class NSArray, NSMutableDictionary, NSOrderedSet, NSDate, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;
@property (readonly, nonatomic) NSDate *modificationDate;

+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedFirstSync;
+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (BOOL)requiresPushNotificationSupport;

- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)save;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArticleID:(id)a0;
- (id)dateAddedForArticleID:(id)a0;
- (void)addObserver:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)recordsForRestoringZoneName:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (BOOL)containsArticleID:(id)a0;
- (void)removeObserver:(id)a0;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (id)localStoreMigrator;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;

@end
