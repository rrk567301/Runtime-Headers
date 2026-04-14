@class NSMutableArray;

@interface TSCHChartLayoutCache : NSObject {
    NSMutableArray *_cacheItems;
}

@property (nonatomic) BOOL ignoreInvalidation;

+ (id)cacheWithCacheItem:(id)a0;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)initWithCacheItem:(id)a0;
- (void)accessWithCacheItemBlock:(id /* block */)a0 calculateBlock:(id /* block */)a1;
- (void)printDebug;

@end
