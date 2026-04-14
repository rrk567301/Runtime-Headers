@interface PLCacheMetricsCollectorClient : NSObject

- (id)initWithAssetsdClient:(id)a0;
- (void)incrementImageCacheHitCount;
- (void)incrementImageCacheMissCount;
- (void)incrementVideoComplementCacheHitCount;
- (void)incrementVideoComplementCacheMissCount;

@end
