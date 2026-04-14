@class STKImageGlyphDataSource, NSLock;

@interface CPKStickersDataSource : NSObject {
    NSLock *_cachedLengthVariablesLock;
}

@property unsigned long long previousCachedLength;
@property unsigned long long cachedLength;
@property (readonly) BOOL stickerCountDidChange;
@property (readonly) BOOL hasStickers;
@property (readonly) unsigned long long numberOfItems;
@property (retain) STKImageGlyphDataSource *imageDataSource;

+ (id)sharedSource;

- (void)refresh;
- (id)itemAtIndex:(long long)a0;
- (void)dealloc;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (BOOL)didCacheNumberOfItems;
- (void)didDeleteSticker;
- (void)imageGlyphDataSourceDidUpdate;

@end
