@class NSString;

@interface KHBehaviorAttribute : KHModel {
    long long _behaviorId;
    NSString *_key;
    long long _keyType;
    NSString *_value;
    NSString *_valueType;
}

- (void)setValueType:(id)a0;
- (id)valueType;
- (void)setValue:(id)a0;
- (void)cacheKey:(id)a0;
- (id)attribute;
- (id)value;
- (void)dealloc;
- (void)setAttribute:(id)a0;
- (id)description;
- (void)setKey:(id)a0;
- (id)key;
- (long long)keyType;
- (void)setKeyType:(long long)a0;
- (void)cacheAttribute:(id)a0;
- (void)cacheValueType:(id)a0;
- (long long)behaviorId;
- (void)cacheBehaviorId:(long long)a0;
- (void)cacheKeyType:(long long)a0;
- (void)cacheValue:(id)a0;
- (void)setBehaviorId:(long long)a0;

@end
