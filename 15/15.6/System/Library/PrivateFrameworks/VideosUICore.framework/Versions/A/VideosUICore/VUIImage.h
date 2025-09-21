@class NSURL, NSData, NSString;

@interface VUIImage : NSObject {
    struct CGImage { } *_image;
    struct CGImageSource { } *_imageSource;
    double _imageWidth;
    double _imageHeight;
    char _enableCache;
    char _cacheImmediately;
    NSURL *_imageURL;
    NSData *_imageData;
    NSString *_imageType;
    char _imageBufferInMemory;
}

@property (readonly, nonatomic) int orientation;
@property (nonatomic) char rotationEnabled;

+ (id)imageWithData:(id)a0;
+ (id)imageWithURL:(id)a0;
+ (id)imageWithPath:(id)a0;
+ (id)imageWithCGImageRef:(struct CGImage { } *)a0 preserveAlpha:(char)a1;
+ (id)imageWithPath:(id)a0 cacheImmediately:(char)a1;
+ (id)imageWithRotationFromPath:(id)a0;
+ (id)imageWithRotationFromURL:(id)a0;
+ (id)imageWithURL:(id)a0 cacheImmediately:(char)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;
- (struct CGImage { } *)image;
- (id)imageType;
- (float)aspectRatio;
- (char)hasAlpha;
- (struct CGSize { double x0; double x1; })pixelBounds;
- (char)isPowerOfTwo;
- (id)uiImage;
- (char)enableCache;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setEnableCache:(char)a0;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 exifOrientation:(int)a1 preserveAlpha:(char)a2;
- (id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource { } *)a0;
- (void)_initializeCGImageWithRotation;
- (id)initWithURL:(id)a0 cacheImmediately:(char)a1;
- (char)isImageBufferInMemory;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largestSquareRect;
- (char)sourceRequiresRotation;
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)a0;

@end
