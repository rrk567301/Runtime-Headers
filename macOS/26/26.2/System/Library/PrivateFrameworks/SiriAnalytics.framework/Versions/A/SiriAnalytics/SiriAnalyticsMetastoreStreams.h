@interface SiriAnalyticsMetastoreStreams : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (void).cxx_destruct;
- (id)init;
- (void)bootstrapAndPruneWithCompletionHandler:(void (^)(void))a0;
- (id)logicalClocksProviderWithMetastore:(id)a0 queue:(id)a1;

@end
