@class NSString;

@interface AppStoreKitInternal.JSMetricsIdentifiersObject : NSObject <_TtP19AppStoreKitInternalP33_D3A1292EB21D7527305200EED8EC5BD833JSMetricsIdentifiersObjectExports_> {
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
