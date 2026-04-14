@interface PFCacheStatistics : NSObject

@property (readonly) unsigned long long hits;
@property (readonly) unsigned long long misses;
@property (readonly) unsigned long long evictions;

- (id)description;
- (void)recordHit;
- (void)recordMiss;
- (void)recordEvictions:(unsigned long long)a0;
- (void)accumulate:(id)a0;

@end
