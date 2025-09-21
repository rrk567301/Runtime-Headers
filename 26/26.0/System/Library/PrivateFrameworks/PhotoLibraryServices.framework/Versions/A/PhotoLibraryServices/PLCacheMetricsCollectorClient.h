@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementImageCacheMissCount;
- (void)incrementVideoComplementCacheHitCount;
- (id)initWithAssetsdClient:(id)a0;
- (void)incrementVideoComplementCacheMissCount;
- (void)incrementImageCacheHitCount;

@end
