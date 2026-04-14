@interface HealthKit.QueryStore : NSObject <HKQueryStoreClient, _HKXPCExportable> {
    void /* unknown type, empty encoding */ proxyProvider;
}

- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)init;

@end
