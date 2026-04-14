@interface ScreenTimeSettingsFoundation.ScreenTimeSettingsPersistentStore : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ transactionAuthor;
    void /* unknown type, empty encoding */ applicator;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ observersByUser;
    void /* unknown type, empty encoding */ observersByUserQueue;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_persistentHistoryQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_context;
    void /* unknown type, empty encoding */ persistenceDirectory;
    void /* unknown type, empty encoding */ _meAltDSID;
}

- (void)accountDidChange:(id)a0;
- (void)storeRemoteChange:(id)a0;

@end
