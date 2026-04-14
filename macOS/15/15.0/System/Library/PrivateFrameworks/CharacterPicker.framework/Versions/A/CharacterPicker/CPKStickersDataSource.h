@class NSTimer, STKImageGlyphDataSource;

@interface CPKStickersDataSource : NSObject

@property (retain) NSTimer *deadlockTimer;
@property unsigned long long cachedLength;
@property (nonatomic) BOOL didUpdateStickersDatabaseAtLeastOnce;
@property (readonly) BOOL hasStickers;
@property (readonly) unsigned long long numberOfItems;
@property (retain) STKImageGlyphDataSource *imageDataSource;

+ (id)sharedSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)itemAtIndex:(long long)a0;
- (void)reset;
- (void)refresh;
- (void)imageGlyphDataSourceDidUpdate;

@end
