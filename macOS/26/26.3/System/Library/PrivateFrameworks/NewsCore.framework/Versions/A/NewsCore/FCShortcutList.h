@class NSOrderedSet, NSMutableDictionary, NFMutexLock;

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    NFMutexLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

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
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (void)validateShortcuts;
- (void)addShortcut:(id)a0;
- (void)removeShortcutWithIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (void)updateShortcutOrderForOrderedIdentifiers:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)recordsForRestoringZoneName:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)containsShortcut:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;

@end
