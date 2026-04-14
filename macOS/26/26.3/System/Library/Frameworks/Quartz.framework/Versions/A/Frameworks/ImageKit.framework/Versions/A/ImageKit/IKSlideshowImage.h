@class NSData;

@interface IKSlideshowImage : IKSlideshowElement {
    struct CGImageSource { } *_tempISR;
    int _tempISRUseCount;
    NSData *_tempData;
    BOOL _tempISRIsDataBased;
    struct CGImage { } *_image;
}

@property struct CGSize { double width; double height; } imageSize;
@property struct CGSize { double width; double height; } imageSizeScaledToFit;
@property int orientation;
@property BOOL imageIsLargerThanScreen;

+ (void)initialize;

- (void)load:(BOOL)a0;
- (struct CGImage { } *)thumbnail;
- (id)description;
- (void)leave;
- (void)setup;
- (void)setImage:(struct CGImage { } *)a0;
- (id)debugState;
- (void)cleanup;
- (void)enter;
- (struct CGImage { } *)image;
- (void)unload;
- (void)setThumbnail:(struct CGImage { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRect;
- (void)addPDFOptionsIfNeeded:(id)a0;
- (void)callThumbnailDidLoad:(id)a0;
- (void)getImageInfo;
- (void)getImageInfoFromCGImage;
- (id)initWithCGImageSourceRef:(struct CGImageSource { } *)a0 dataSourceHandler:(id)a1 index:(unsigned long long)a2 subIndex:(unsigned long long)a3;
- (id)initWithDataSourceHandler:(id)a0 index:(unsigned long long)a1 subIndex:(unsigned long long)a2;
- (void)loadThumbnail:(BOOL)a0 currentCount:(unsigned long long)a1;
- (void)loadThumbnailIfNeeded;
- (void)rotateLeft;
- (void)rotateRight;
- (void)rotateThumbnail:(int)a0;
- (double)screenDPI;
- (void)setupImageSiblings;

@end
