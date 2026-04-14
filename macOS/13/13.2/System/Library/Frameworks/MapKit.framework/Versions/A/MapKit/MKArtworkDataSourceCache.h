@class NSCache, MKTransitArtworkManager;

@interface MKArtworkDataSourceCache : NSObject {
    NSCache *_artworkImageCache;
}

@property (readonly, nonatomic) MKTransitArtworkManager *artworkManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)purge;
- (id)initWithArtworkManager:(id)a0;
- (id)imageForArtwork:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4 widthPaddingMultiple:(double)a5;
- (void)_shieldPackDidUpdate;
- (id)imageForSizedArtwork:(id)a0 scale:(double)a1 nightMode:(BOOL)a2;
- (id)imageForArtwork:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4;
- (id)_lookupArtworkInCacheWithKey:(id)a0;
- (void)_setArtworkImageInCache:(id)a0 forKey:(id)a1;

@end
