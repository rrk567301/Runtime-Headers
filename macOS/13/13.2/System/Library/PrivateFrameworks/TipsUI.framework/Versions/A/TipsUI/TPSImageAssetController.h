@interface TPSImageAssetController : NSObject

+ (id)dataCacheForIdentifier:(id)a0;
+ (id)defaultInMemoryImageCache;
+ (void)removeInMemoryCache;
+ (void)addInMemoryCacheForImage:(id)a0 identifier:(id)a1 cost:(unsigned long long)a2;
+ (id)imageFromMemoryCacheForIdentifier:(id)a0;
+ (id)getImageForIdentifier:(id)a0;
+ (id)formattedDataForPath:(id)a0 identifier:(id)a1 priority:(float)a2 completionHandler:(id /* block */)a3;

@end
