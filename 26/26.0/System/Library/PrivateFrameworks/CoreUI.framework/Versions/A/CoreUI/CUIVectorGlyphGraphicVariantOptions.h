@class NSArray;

@interface CUIVectorGlyphGraphicVariantOptions : NSObject <NSCopying>

@property (nonatomic) long long shape;
@property (nonatomic) long long fill;
@property (copy, nonatomic) NSArray *fillColors;
@property (nonatomic) long long contentEffect;
@property (retain, nonatomic) id monochromeForegroundColor;
@property (nonatomic) double roundedRectCornerRadius;
@property (nonatomic) long long imageCentering;
@property (nonatomic) long long imageScaling;
@property (nonatomic) long long imageAlignment;
@property (nonatomic) struct CGSize { double width; double height; } imageOffset;
@property (nonatomic) long long shapeEffect;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) id borderColor;

+ (struct CGSize { double x0; double x1; })automaticOffset;
+ (double)defaultSymbolPointSizeRatio;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)_areValid;
- (BOOL)prefersAutomaticCentering;

@end
