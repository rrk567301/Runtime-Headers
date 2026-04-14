@class NSImage, SFImage;

@interface SearchUIImage : SFImage

@property (retain, nonatomic) NSImage *uiImage;
@property (readonly, nonatomic) SFImage *sfImage;
@property (nonatomic) BOOL useFastPathShadow;
@property (nonatomic) BOOL needsTinting;
@property (readonly, nonatomic) int defaultCornerRoundingStyle;
@property (readonly) double aspectRatio;

+ (id)imageWithSFImage:(id)a0 variantForAppIcon:(unsigned long long)a1;
+ (id)imageWithSFImage:(id)a0;

- (struct CGSize { double x0; double x1; })size;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)imageData;
- (double)scale;
- (BOOL)isTemplate;
- (double)cornerRadius;
- (id)initWithImage:(id)a0;
- (BOOL)shouldCropToCircle;
- (int)cornerRoundingStyle;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithSFImage:(id)a0;
- (void)decodeImageData:(id)a0 scale:(double)a1 isDarkStyle:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)loadImageWithImageData:(id)a0 scale:(double)a1 isDarkStyle:(BOOL)a2;

@end
