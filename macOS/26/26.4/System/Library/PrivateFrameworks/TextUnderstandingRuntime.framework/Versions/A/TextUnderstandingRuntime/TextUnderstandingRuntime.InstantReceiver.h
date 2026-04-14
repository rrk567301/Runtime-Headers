@interface TextUnderstandingRuntime.InstantReceiver : NSObject <SpotlightReceiver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_bundleRequestMap;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ pipelineManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supportedBundleIdentifiers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allReceiversSupportedBundleIdentifiers;
}

- (id)supportedBundleIDs;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1;
- (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;

@end
