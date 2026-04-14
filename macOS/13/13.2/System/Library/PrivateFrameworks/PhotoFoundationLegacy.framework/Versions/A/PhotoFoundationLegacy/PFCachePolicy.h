@interface PFCachePolicy : NSObject

- (unsigned long long)capacityHint;
- (void)didGetCacheEntry:(id)a0;
- (id)willAddOrReplaceEntry:(id)a0 add:(BOOL)a1 contents:(id)a2;
- (void)didAddCacheEntry:(id)a0;
- (void)didRemoveCacheEntry:(id)a0;
- (void)didRemoveAllCacheEntries;
- (id)cacheEntryWithKey:(id)a0 value:(id)a1;

@end
