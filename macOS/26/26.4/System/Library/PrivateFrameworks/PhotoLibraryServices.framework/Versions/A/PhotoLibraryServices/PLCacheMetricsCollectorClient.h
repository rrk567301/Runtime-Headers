@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementVideoComplementCacheHitCount;
- (void)incrementVideoComplementCacheMissCount;
- (void)incrementImageCacheMissCount;
- (id)initWithAssetsdClient:(id)a0;
- (void)incrementImageCacheHitCount;

@end
