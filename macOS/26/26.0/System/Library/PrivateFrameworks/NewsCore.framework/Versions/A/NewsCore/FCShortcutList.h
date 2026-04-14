@class NSOrderedSet, NSMutableDictionary, NFMutexLock;

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    NFMutexLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

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

- (void)loadLocalCachesFromStore;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)validateShortcuts;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)addObserver:(id)a0;
- (void)addShortcut:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)updateShortcutOrderForOrderedIdentifiers:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)removeShortcutWithIdentifier:(id)a0;
- (BOOL)containsShortcut:(id)a0;
- (void).cxx_destruct;

@end
