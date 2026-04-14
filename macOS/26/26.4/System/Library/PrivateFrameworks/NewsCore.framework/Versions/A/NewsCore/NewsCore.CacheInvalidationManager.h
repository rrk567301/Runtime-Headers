@class NSError;

@interface NewsCore.CacheInvalidationManager : _TtCs12_SwiftObject <FCCacheInvalidationManagerType> {
    void /* unknown type, empty encoding */ configProvider;
    void /* unknown type, empty encoding */ remoteConfig;
    void /* unknown type, empty encoding */ cacheInvalidators;
}

- (void)addCacheInvalidator:(id)a0;
- (void)checkForCacheInvalidationsWithCompletionHandler:(void (^)(NSError *))a0;
- (void)forceInvalidateWithRecordID:(id)a0;

@end
