@class NSArray, NSMutableDictionary, FCMTWriterLock;

@interface FCShortcutCategoryList : FCPrivateDataController {
    NSMutableDictionary *_shortcutCategoriesByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSArray *blockedShortcutCategories;

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
- (id)recordsForRestoringZoneName:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void).cxx_destruct;
- (void)addShortcutCategory:(id)a0;
- (void)removeAllShortcutCategories;
- (void)removeShortcutCategoryWithIdentifier:(id)a0;

@end
