@interface HealthKit.QueryStore : NSObject <HKQueryStoreClient, _HKXPCExportable> {
    void /* unknown type, empty encoding */ proxyProvider;
}

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)init;

@end
