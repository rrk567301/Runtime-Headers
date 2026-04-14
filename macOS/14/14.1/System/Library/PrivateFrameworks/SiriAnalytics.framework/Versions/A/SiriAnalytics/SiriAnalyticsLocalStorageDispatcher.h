@interface SiriAnalyticsLocalStorageDispatcher : NSObject <SiriAnalyticsMessageStorage> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ messageStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 messageStore:(id)a1 plusStream:(id)a2;
- (void)storeMessages:(id)a0;

@end
