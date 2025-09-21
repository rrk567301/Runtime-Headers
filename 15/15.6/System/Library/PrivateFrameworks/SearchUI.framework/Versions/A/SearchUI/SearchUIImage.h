@class NSImage, SFImageContext, SFImage;

@interface SearchUIImage : SFImage

@property (retain) SFImageContext *lastLoadedContext;
@property (retain, nonatomic) NSImage *uiImage;
@property (retain, nonatomic) SFImage *sfImage;
@property (nonatomic) char supportsFastPathShadow;
@property (nonatomic) char needsTinting;
@property (nonatomic) char shouldReadTemplateStatusFromLoadedImage;
@property (readonly, nonatomic) int defaultCornerRoundingStyle;
@property (readonly) double aspectRatio;

+ (id)imageWithSFImage:(id)a0;
+ (id)imageWithSFImage:(id)a0 variantForAppIcon:(unsigned long long)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)imageData;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (double)cornerRadius;
- (id)initWithImage:(id)a0;
- (char)isTemplate;
- (id)badgingImage;
- (int)cornerRoundingStyle;
- (char)shouldCropToCircle;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(char)a1 completionHandler:(id /* block */)a2;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(char)a1;
- (void)decodeImageData:(id)a0 scale:(double)a1 isDarkStyle:(char)a2 completionHandler:(id /* block */)a3;
- (id)initWithSFImage:(id)a0;
- (id)loadImageWithImageData:(id)a0 scale:(double)a1 isDarkStyle:(char)a2;

@end
