@class NSArray, NSColorSpace;

@interface NSGradient : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_colorArray;
    NSColorSpace *_colorSpace;
    void *_functionRef;
    void *_componentArray;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSColorSpace *colorSpace;
@property (readonly) long long numberOfColorStops;

+ (void)initialize;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_colorSpaceForColorArray:(id)a0;
- (struct CGFunction { } *)_interpolationFunctionRefWithCallbacks:(struct CGFunctionCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; } *)a0;
- (void)_commonInitWithColorArray:(id)a0 colorSpace:(id)a1 padStart:(BOOL)a2 padEnd:(BOOL)a3;
- (id)initWithStartingColor:(id)a0 endingColor:(id)a1;
- (id)initWithColors:(id)a0;
- (id)initWithColorsAndLocations:(id)a0;
- (id)initWithColors:(id)a0 atLocations:(const double *)a1 colorSpace:(id)a2;
- (void)drawFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 options:(unsigned long long)a2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1;
- (void)drawInBezierPath:(id)a0 angle:(double)a1;
- (void)drawFromCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 toCenter:(struct CGPoint { double x0; double x1; })a2 radius:(double)a3 options:(unsigned long long)a4;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeCenterPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)drawInBezierPath:(id)a0 relativeCenterPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)getColor:(id *)a0 location:(double *)a1 atIndex:(long long)a2;
- (id)interpolatedColorAtLocation:(double)a0;
- (BOOL)_isValidDecodedColorArray:(id)a0 error:(id *)a1;

@end
