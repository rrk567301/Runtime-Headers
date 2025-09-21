@class MRImageManager, NSString, NSMutableDictionary, NSMutableSet, MRImage;

@interface MRAssetMaster : NSObject {
    NSMutableSet *_unusedPlayers;
}

@property (readonly) NSString *path;
@property (readonly) MRImageManager *imageManager;
@property (readonly) MRImage *thumbnail;
@property (nonatomic) double timestamp;
@property (readonly) struct CGSize { double width; double height; } originalSize;
@property (readonly) char isValid;
@property (readonly) char isEmbeddedAsset;
@property (readonly) char isSupportedMovie;
@property (readonly) NSMutableDictionary *players;

- (void)dealloc;
- (void)invalidate;
- (char)purgeResources;
- (id)initWithPath:(id)a0 originalSize:(struct CGSize { double x0; double x1; })a1 isEmbeddedAsset:(char)a2 isSupportedMovie:(char)a3 andImageManager:(id)a4;
- (void)relinquishPlayer:(id)a0;
- (id)retainedByUserPlayerForSize:(struct CGSize { double x0; double x1; })a0 andOptions:(id)a1;
- (id)thumbnailForFlagsMonochromatic:(char)a0 mipmap:(char)a1 powerOfTwo:(char)a2;

@end
