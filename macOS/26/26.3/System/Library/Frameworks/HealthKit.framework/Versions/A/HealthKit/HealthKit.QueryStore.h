@interface HealthKit.QueryStore : NSObject <HKQueryStoreClient, _HKXPCExportable> {
    void /* unknown type, empty encoding */ proxyProvider;
}

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)init;
- (id)exportedInterface;
- (void).cxx_destruct;

@end
