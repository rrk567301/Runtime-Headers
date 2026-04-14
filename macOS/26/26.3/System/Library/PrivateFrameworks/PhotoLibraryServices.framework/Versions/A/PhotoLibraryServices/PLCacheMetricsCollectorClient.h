@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementVideoComplementCacheMissCount;
- (void)incrementVideoComplementCacheHitCount;
- (id)initWithAssetsdClient:(id)a0;
- (void)incrementImageCacheHitCount;
- (void)incrementImageCacheMissCount;

@end
