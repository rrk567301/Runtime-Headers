@class NSMutableDictionary;

@interface HDDatabaseValueCacheTransactionStorage : NSObject {
    char _didRemoveAllObjects;
    NSMutableDictionary *_cache;
    long long _cacheScope;
}

- (id)init;
- (void).cxx_destruct;

@end
