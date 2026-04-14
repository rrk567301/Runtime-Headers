@class NSOrderedSet, NSMutableDictionary, NFMutexLock;

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    NFMutexLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresPushNotificationSupport;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedFirstSync;

- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)addShortcut:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (BOOL)containsShortcut:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)removeShortcutWithIdentifier:(id)a0;
- (void)validateShortcuts;
- (void).cxx_destruct;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (void)removeObserver:(id)a0;
- (void)updateShortcutOrderForOrderedIdentifiers:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)addObserver:(id)a0;

@end
