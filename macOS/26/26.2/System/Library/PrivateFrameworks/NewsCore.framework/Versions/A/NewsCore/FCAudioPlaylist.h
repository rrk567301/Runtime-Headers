@class NSArray, NSMutableDictionary, NSOrderedSet, NSDate, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;
@property (readonly, nonatomic) NSDate *modificationDate;

+ (void)populateLocalStoreClassRegistry:(id)a0;
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

- (void)save;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (BOOL)containsArticleID:(id)a0;
- (void)addObserver:(id)a0;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)removeArticleID:(id)a0;
- (id)localStoreMigrator;
- (id)dateAddedForArticleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;

@end
