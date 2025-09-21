@interface SiriAnalyticsMetastoreStreams : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (id)init;
- (void).cxx_destruct;
- (void)bootstrapAndPruneWithCompletionHandler:(void (^)(void))a0;
- (id)logicalClocksProviderWithMetastore:(id)a0 queue:(id)a1;

@end
