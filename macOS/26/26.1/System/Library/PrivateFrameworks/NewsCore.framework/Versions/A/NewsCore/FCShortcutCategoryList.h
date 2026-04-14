@class NSArray, NSMutableDictionary, FCMTWriterLock;

@interface FCShortcutCategoryList : FCPrivateDataController {
    NSMutableDictionary *_shortcutCategoriesByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSArray *blockedShortcutCategories;

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
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)addShortcutCategory:(id)a0;
- (void)removeAllShortcutCategories;
- (void)removeShortcutCategoryWithIdentifier:(id)a0;

@end
