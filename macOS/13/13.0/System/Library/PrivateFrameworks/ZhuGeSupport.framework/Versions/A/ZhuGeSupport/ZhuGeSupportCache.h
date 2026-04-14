@class NSNumber, NSMutableArray, NSMutableDictionary;

@interface ZhuGeSupportCache : NSObject

@property (readonly) NSNumber *capacity;
@property (readonly) Class cacheType;
@property (readonly) NSMutableArray *cacheList;
@property (readonly) NSMutableDictionary *cacheDict;

- (void).cxx_destruct;
- (id)initWithCapacity:(id)a0 AndCacheType:(Class)a1;
- (id)getCacheForKey:(id)a0;
- (BOOL)setCache:(id)a0 forKey:(id)a1 withError:(id *)a2;

@end
