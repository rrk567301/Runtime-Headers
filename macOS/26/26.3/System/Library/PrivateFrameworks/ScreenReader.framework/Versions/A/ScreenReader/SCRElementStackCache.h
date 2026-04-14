@class NSMutableArray, NSMutableDictionary;

@interface SCRElementStackCache : NSObject

@property (retain, nonatomic) NSMutableArray *_mutatedKeys;
@property (retain, nonatomic) NSMutableDictionary *_cache;

- (long long)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)inUse;
- (id)_objectWithExpectedType:(Class)a0 forKey:(id)a1;
- (long long)_cacheRefCount;
- (id)_currentKeys;
- (void)beginUsage;
- (void)endUsage;
- (id)objectWithExpectedType:(Class)a0 forKey:(id)a1;
- (id)uiElementForKey:(id)a0;

@end
