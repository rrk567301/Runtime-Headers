@interface HealthKit.QueryStore : NSObject <HKQueryStoreClient, _HKXPCExportable> {
    void /* unknown type, empty encoding */ proxyProvider;
}

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)init;
- (id)remoteInterface;
- (void).cxx_destruct;

@end
