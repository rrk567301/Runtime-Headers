@class NSMutableDictionary;

@interface ACAccountUniquingCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uniqueCachedAccountsLock;
    NSMutableDictionary *_cachedAccounts;
}

+ (id)sharedUniqueCache;

- (id)init;
- (void).cxx_destruct;
- (void)_lock_cacheParentChain:(id)a0;
- (void)_lock_clearParentChains:(id)a0;
- (BOOL)_lock_hydrateParentChain:(id)a0;
- (void)cacheAccounts:(id)a0;
- (id)cachedAccountsByIdentifiers:(id)a0;
- (void)clearAccountsByIdentifiers:(id)a0;

@end
