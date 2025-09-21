@class NSCache, MKTransitArtworkManager;

@interface MKArtworkDataSourceCache : NSObject {
    NSCache *_artworkImageCache;
}

@property (readonly, nonatomic) MKTransitArtworkManager *artworkManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)purge;
- (void)_setArtworkImageInCache:(id)a0 forKey:(id)a1;
- (id)_lookupArtworkInCacheWithKey:(id)a0;
- (void)_shieldPackDidUpdate;
- (id)imageForArtwork:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(char)a4;
- (id)imageForArtwork:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(char)a4 widthPaddingMultiple:(double)a5;
- (id)imageForSizedArtwork:(id)a0 scale:(double)a1 nightMode:(char)a2;
- (id)initWithArtworkManager:(id)a0;

@end
