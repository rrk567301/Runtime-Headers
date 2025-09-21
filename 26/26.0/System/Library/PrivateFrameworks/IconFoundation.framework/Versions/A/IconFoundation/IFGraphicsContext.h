@class IFImage, NSData, IFColor;

@interface IFGraphicsContext : NSObject

@property (readonly, nonatomic) unsigned long long preset;
@property (readonly, nonatomic) struct CGContext { } *cgContext;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) IFImage *image;
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) IFColor *fillColor;
@property (retain, nonatomic) IFColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) int blendMode;

+ (unsigned long long)presetFromColorSpace:(struct CGColorSpace { } *)a0;
+ (struct CGColorSpace { } *)colorSpaceFromPixelFormat:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3[1]; })a0;
+ (unsigned long long)presetFromPixelFormat:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3[1]; })a0;
+ (unsigned long long)presetFromCGImage:(struct CGImage { } *)a0;
+ (id)bitmapContextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 preset:(unsigned long long)a2;
+ (id)bitmapContextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 pixelFormat:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3[1]; })a2;
+ (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3[1]; })pixelFormatFromPreset:(unsigned long long)a0;
+ (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3[1]; })pixelFormatFromCGImage:(struct CGImage { } *)a0;

- (void)clear;
- (void)drawCGImage:(struct CGImage { } *)a0 centeredInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawCGImage:(struct CGImage { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (id)initWithCGContext:(struct CGContext { } *)a0 preset:(unsigned long long)a1;
- (void)strokePath:(struct CGPath { } *)a0;
- (void)drawText:(id)a0 fontName:(id)a1 fontSize:(double)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)drawSymbolImage:(id)a0 centeredInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clipToMaskCGImage:(struct CGImage { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)fillPath:(struct CGPath { } *)a0;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })size;
- (void)popState;
- (void)pushState;

@end
