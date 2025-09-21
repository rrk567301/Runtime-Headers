@class NSOrderedSet, NSMutableDictionary, FCMTWriterLock;

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

+ (id)desiredKeys;
+ (char)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (char)requiresBatchedSync;
+ (char)requiresHighPriorityFirstSync;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)addShortcut:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (char)canHelpRestoreZoneName:(id)a0;
- (char)containsShortcut:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)loadLocalCachesFromStore;
- (char)moveShortcutWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeShortcutWithIdentifier:(id)a0;
- (void)updateShortcutOrderForOrderedIdentifiers:(id)a0;
- (void)validateShortcuts;

@end
