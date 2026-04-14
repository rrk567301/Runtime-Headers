@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementVideoComplementCacheMissCount;
- (void)incrementImageCacheMissCount;
- (id)initWithAssetsdClient:(id)a0;
- (void)incrementVideoComplementCacheHitCount;
- (void)incrementImageCacheHitCount;

@end
