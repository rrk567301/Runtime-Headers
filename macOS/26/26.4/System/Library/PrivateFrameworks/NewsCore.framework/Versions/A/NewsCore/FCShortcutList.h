@class NSOrderedSet, NSMutableDictionary, NFMutexLock;

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    NFMutexLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

+ (id)desiredKeys;
+ (BOOL)requiresBatchedFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (long long)commandQueueUrgency;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;

- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)updateShortcutOrderForOrderedIdentifiers:(id)a0;
- (void)loadLocalCachesFromStore;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)addShortcut:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (BOOL)containsShortcut:(id)a0;
- (void)removeShortcutWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)validateShortcuts;
- (void)removeObserver:(id)a0;

@end
