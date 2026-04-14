@class NSArray, NSMutableDictionary, NSOrderedSet, NSDate, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;
@property (readonly, nonatomic) NSDate *modificationDate;

+ (id)desiredKeys;
+ (BOOL)requiresBatchedFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (long long)commandQueueUrgency;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;

- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)save;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)loadLocalCachesFromStore;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (id)localStoreMigrator;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeArticleID:(id)a0;
- (BOOL)containsArticleID:(id)a0;
- (id)dateAddedForArticleID:(id)a0;
- (void)removeObserver:(id)a0;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;

@end
