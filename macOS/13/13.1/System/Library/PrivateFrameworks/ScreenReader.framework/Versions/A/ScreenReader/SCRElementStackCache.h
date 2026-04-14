@class NSMutableArray, NSMutableDictionary;

@interface SCRElementStackCache : NSObject

@property (retain, nonatomic) NSMutableArray *_mutatedKeys;
@property (retain, nonatomic) NSMutableDictionary *_cache;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (BOOL)inUse;
- (void)beginUsage;
- (void)endUsage;
- (long long)_cacheRefCount;
- (id)_currentKeys;
- (id)_objectWithExpectedType:(Class)a0 forKey:(id)a1;
- (id)uiElementForKey:(id)a0;
- (id)objectWithExpectedType:(Class)a0 forKey:(id)a1;

@end
