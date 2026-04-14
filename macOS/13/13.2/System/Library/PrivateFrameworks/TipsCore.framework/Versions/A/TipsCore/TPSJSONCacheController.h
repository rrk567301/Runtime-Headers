@interface TPSJSONCacheController : TPSDataCacheController

+ (id)sharedInstance;

- (id)newDataCache;
- (id)formattedDataWithFileURL:(id)a0;
- (id)formattedDataWithData:(id)a0;
- (BOOL)isURLValid:(id)a0;
- (void)formattedDataWithFileURL:(id)a0 completionHandler:(id /* block */)a1;

@end
