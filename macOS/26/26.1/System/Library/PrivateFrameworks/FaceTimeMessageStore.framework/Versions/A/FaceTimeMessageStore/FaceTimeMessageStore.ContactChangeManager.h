@interface FaceTimeMessageStore.ContactChangeManager : NSObject <CNChangeHistoryEventVisitor> {
    void /* unknown type, empty encoding */ analyticsManager;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ processingNotification;
}

- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)contactStoreDidChange:(id)a0;

@end
