@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementImageCacheMissCount;
- (void)incrementImageCacheHitCount;
- (void)incrementVideoComplementCacheHitCount;
- (void)incrementVideoComplementCacheMissCount;
- (id)initWithAssetsdClient:(id)a0;

@end
