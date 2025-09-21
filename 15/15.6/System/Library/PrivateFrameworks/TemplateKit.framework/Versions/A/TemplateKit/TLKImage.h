@class NSCache, NSImage;

@interface TLKImage : NSObject

@property (retain) NSCache *imageCache;
@property (retain, nonatomic) NSImage *uiImage;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double aspectRatio;
@property (nonatomic) char isTemplate;
@property (nonatomic) unsigned long long cornerRoundingStyle;
@property (nonatomic) char supportsFastPathShadow;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) TLKImage *badgeImage;

+ (id)applyTintColor:(id)a0 toImage:(id)a1;
+ (char)imageIsSymbol:(id)a0;
+ (char)isTemplateImage:(id)a0;
+ (id)keyForScale:(double)a0 isDarkStyle:(char)a1;
+ (id)templateImageForImage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0;
- (void)cacheImage:(id)a0 forScale:(double)a1 isDarkStyle:(char)a2;
- (id)cachedImageForScale:(double)a0 isDarkStyle:(char)a1;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(char)a1 completionHandler:(id /* block */)a2;

@end
