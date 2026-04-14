@class NSArray, NSMutableDictionary, NSOrderedSet, NSDate, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;
@property (readonly, nonatomic) NSDate *modificationDate;

+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresPushNotificationSupport;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedFirstSync;

- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)dateAddedForArticleID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (BOOL)containsArticleID:(id)a0;
- (id)localStoreMigrator;
- (void)removeObserver:(id)a0;
- (void)removeArticleID:(id)a0;
- (void)save;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)addObserver:(id)a0;

@end
