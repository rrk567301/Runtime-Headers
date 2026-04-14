@class NSString, NSArray;

@interface HomeKitDaemon.CoreSpotlightIndexer : SwiftNativeNSObject <SpotlightDaemonClient> {
    void /* unknown type, empty encoding */ indexerDataSource;
}

- (id)init;
- (void)reindexAllItemsForBundleID:(NSString *)a0 protectionClass:(NSString *)a1 acknowledgementHandler:(void (^)(void))a2;
- (void)reindexItemsWithIdentifiers:(NSArray *)a0 bundleID:(NSString *)a1 protectionClass:(NSString *)a2 acknowledgementHandler:(void (^)(void))a3;

@end
