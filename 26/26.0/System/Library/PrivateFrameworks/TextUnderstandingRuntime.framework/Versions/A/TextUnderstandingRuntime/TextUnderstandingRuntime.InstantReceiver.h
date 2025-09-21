@interface TextUnderstandingRuntime.InstantReceiver : NSObject <SpotlightReceiver> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ pipelineManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supportedBundleIdentifiers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allReceiversSupportedBundleIdentifiers;
}

- (id)supportedBundleIDs;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1;
- (id)init;
- (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteAllUserActivities:(id)a0;
- (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)addUserAction:(id)a0 withItem:(id)a1;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1;
- (void)addInteractions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void).cxx_destruct;

@end
