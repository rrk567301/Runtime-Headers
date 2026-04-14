@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementVideoComplementCacheMissCount;
- (void)incrementImageCacheMissCount;
- (id)initWithAssetsdClient:(id)a0;
- (void)incrementImageCacheHitCount;
- (void)incrementVideoComplementCacheHitCount;

@end
