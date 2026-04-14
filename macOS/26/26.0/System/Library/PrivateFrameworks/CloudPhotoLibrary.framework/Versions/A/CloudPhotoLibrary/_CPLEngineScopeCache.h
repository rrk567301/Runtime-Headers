@class NSIndexSet, NSMutableDictionary;

@interface _CPLEngineScopeCache : NSObject {
    NSMutableDictionary *_scopeCache;
    NSMutableDictionary *_scopeByLocalIndex;
    NSMutableDictionary *_scopeByCloudIndex;
    NSMutableDictionary *_scopeByStableIndex;
    NSIndexSet *_validLocalIndexes;
    NSIndexSet *_validCloudIndexes;
}

- (id)validCloudIndexes;
- (id)validLocalIndexes;
- (id)scopeWithLocalIndex:(long long)a0;
- (id)init;
- (id)scopeWithIdentifier:(id)a0;
- (void)cacheValidLocalIndexes:(id)a0;
- (void)cacheValidCloudIndexes:(id)a0;
- (id)scopeWithCloudIndex:(long long)a0;
- (void).cxx_destruct;
- (void)cacheScope:(id)a0 forScopeStorage:(id)a1;
- (id)scopeWithStableIndex:(long long)a0;

@end
