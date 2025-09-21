@class NUColorSpace;
@protocol NUMutablePurgeableSurfaceImage;

@interface NUTiledProcessorCache : NUProcessorCache {
    id<NUMutablePurgeableSurfaceImage> _cachedTiledImage;
    struct { long long width; long long height; } _tileSize;
    NUColorSpace *_colorSpace;
    unsigned long long _textureCacheCount;
}

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)_render:(id)a0;

@end
