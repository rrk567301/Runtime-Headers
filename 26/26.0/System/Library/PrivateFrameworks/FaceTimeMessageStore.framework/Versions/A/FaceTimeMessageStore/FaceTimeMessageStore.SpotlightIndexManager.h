@interface FaceTimeMessageStore.SpotlightIndexManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ messageStore;
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ csIndex;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ metadataCache;
    void /* unknown type, empty encoding */ callProviderManager;
    void /* unknown type, empty encoding */ contactChangeManager;
    void /* unknown type, empty encoding */ callDirectoryManager;
    void /* unknown type, empty encoding */ callDirectoryNotificationToken;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ analyticsManager;
    void /* unknown type, empty encoding */ deferredIndexingTask;
    void /* unknown type, empty encoding */ summaryIndexingTask;
}

- (void)handleCallDirectoryIdentitiesChanged;
- (void)handleLocaleChanges;

@end
