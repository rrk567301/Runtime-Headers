@class CIImage;

@interface PIHeadroomFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extendedRect;
@property (nonatomic) BOOL useBlur;
@property (nonatomic) double renderScale;

- (void).cxx_destruct;
- (id)outputImage;

@end
