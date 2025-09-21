@class CIImage, PFParallaxColor;

@interface PIHeadroomFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extendedRect;
@property (nonatomic) char useBlur;
@property (nonatomic) char isInactive;
@property (nonatomic) char useHighKeyStyle;
@property (retain, nonatomic) PFParallaxColor *primaryGradientColor;
@property (nonatomic) double renderScale;

- (void).cxx_destruct;
- (id)outputImage;

@end
