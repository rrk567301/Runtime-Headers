@class NSString;

@interface KHAppliedTrait : KHModel {
    long long _traitId;
    long long _entityId;
    NSString *_entityClass;
}

- (void)dealloc;
- (void)setEntityId:(long long)a0;
- (long long)entityId;
- (id)entityClass;
- (void)setEntityClass:(id)a0;
- (void)cacheEntityId:(long long)a0;
- (void)cacheEntityClass:(id)a0;
- (long long)traitId;
- (void)cacheTraitId:(long long)a0;
- (void)setTraitId:(long long)a0;

@end
