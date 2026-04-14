@class AVAssetCache;

@interface MTAVAssetCache : MTSingleton

@property (readonly, nonatomic) AVAssetCache *assetCache;

+ (void)_asyncPrewarm;

- (void).cxx_destruct;
- (id)init;

@end
