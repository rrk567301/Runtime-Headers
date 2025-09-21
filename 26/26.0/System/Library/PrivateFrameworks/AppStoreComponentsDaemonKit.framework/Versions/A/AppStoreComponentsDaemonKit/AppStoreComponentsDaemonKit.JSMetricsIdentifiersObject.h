@class NSString;

@interface AppStoreComponentsDaemonKit.JSMetricsIdentifiersObject : NSObject <_TtP27AppStoreComponentsDaemonKitP33_7BE7CE090F478DB8B3944673BD97702A33JSMetricsIdentifiersObjectExports_> {
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
