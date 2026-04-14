@class NSOrderedSet, NSMutableDictionary, FCMTWriterLock;

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

+ (id)desiredKeys;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)addShortcut:(id)a0;
- (void)removeShortcutWithIdentifier:(id)a0;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (BOOL)containsShortcut:(id)a0;

@end
