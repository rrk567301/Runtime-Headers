@class ImageDataCache;

@interface PurgeableImage : NSImage

@property (weak, nonatomic) ImageDataCache *cache;
@property (nonatomic) const void *buffer;

- (void).cxx_destruct;
- (void)dealloc;

@end
