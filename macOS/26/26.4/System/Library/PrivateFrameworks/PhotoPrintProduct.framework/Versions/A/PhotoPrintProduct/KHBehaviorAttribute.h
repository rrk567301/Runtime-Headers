@class NSString;

@interface KHBehaviorAttribute : KHModel {
    long long _behaviorId;
    NSString *_key;
    long long _keyType;
    NSString *_value;
    NSString *_valueType;
}

- (long long)keyType;
- (id)key;
- (void)setAttribute:(id)a0;
- (id)valueType;
- (void)setValueType:(id)a0;
- (id)attribute;
- (id)value;
- (id)description;
- (void)setKey:(id)a0;
- (void)setValue:(id)a0;
- (void)dealloc;
- (void)cacheKey:(id)a0;
- (void)setKeyType:(long long)a0;
- (void)cacheAttribute:(id)a0;
- (void)cacheValueType:(id)a0;
- (long long)behaviorId;
- (void)cacheBehaviorId:(long long)a0;
- (void)cacheKeyType:(long long)a0;
- (void)cacheValue:(id)a0;
- (void)setBehaviorId:(long long)a0;

@end
