@interface SiriAnalyticsLocalStorageDispatcher : NSObject <SiriAnalyticsMessageStorage> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ messageStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)storeMessages:(id)a0;
- (id)initWithQueue:(id)a0 messageStore:(id)a1 legacyStorage:(id)a2;

@end
