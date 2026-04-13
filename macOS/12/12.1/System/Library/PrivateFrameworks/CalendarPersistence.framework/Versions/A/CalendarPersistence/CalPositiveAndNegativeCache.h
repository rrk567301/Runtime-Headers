@class NSMutableDictionary;

@interface CalPositiveAndNegativeCache : NSObject

@property (retain) NSMutableDictionary *backingDictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)cachedObjectForKey:(id)a0;
- (BOOL)cacheWasNegativeForKey:(id)a0;
- (void)markCacheNegativeForKey:(id)a0;
- (void)markKeysMissingFromCacheAsNegativeForKeys:(id)a0;

@end
