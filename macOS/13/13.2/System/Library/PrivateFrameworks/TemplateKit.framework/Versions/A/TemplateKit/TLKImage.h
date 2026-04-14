@class NSCache, NSImage;

@interface TLKImage : NSObject

@property (retain) NSCache *imageCache;
@property (retain, nonatomic) NSImage *uiImage;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double aspectRatio;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) unsigned long long cornerRoundingStyle;
@property (nonatomic) BOOL supportsFastPathShadow;
@property (nonatomic) double cornerRadius;

+ (id)templateImageForImage:(id)a0;
+ (id)applyTintColor:(id)a0 toImage:(id)a1;
+ (id)keyForScale:(double)a0 isDarkStyle:(BOOL)a1;
+ (BOOL)imageIsSymbol:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)cachedImageForScale:(double)a0 isDarkStyle:(BOOL)a1;
- (void)cacheImage:(id)a0 forScale:(double)a1 isDarkStyle:(BOOL)a2;

@end
