@class NSString;

@interface GameStoreKit.JSMetricsIdentifiersObject : NSObject <_TtP12GameStoreKitP33_6FB2E29A81EF1F7AC902DCF96453C7C633JSMetricsIdentifiersObjectExports_> {
    void /* unknown type, empty encoding */ metricsIdStore;
    void /* unknown type, empty encoding */ metricsTopicProvider;
}

@property (nonatomic, readonly) NSString *currentTopic;

- (id)init;
- (void).cxx_destruct;
- (id)getIdentifierForContext:(id)a0;
- (id)getIdentifierForContextSync:(id)a0;
- (id)getMetricsFieldsForContexts:(id)a0;

@end
