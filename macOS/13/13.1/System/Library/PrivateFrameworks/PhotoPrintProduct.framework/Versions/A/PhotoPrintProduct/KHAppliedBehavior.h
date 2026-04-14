@class NSString, KHBehavior;

@interface KHAppliedBehavior : KHModel {
    long long _behaviorId;
    long long _entityId;
    NSString *_entityClass;
    KHBehavior *_behavior;
    id _entityObject;
}

- (void)dealloc;
- (void)remove;
- (id)behavior;
- (void)setEntityId:(long long)a0;
- (long long)entityId;
- (id)entityClass;
- (void)setEntityClass:(id)a0;
- (long long)behaviorId;
- (void)cacheBehaviorId:(long long)a0;
- (void)setBehaviorId:(long long)a0;
- (void)cacheEntityId:(long long)a0;
- (void)cacheEntityClass:(id)a0;
- (id)entityObject;

@end
