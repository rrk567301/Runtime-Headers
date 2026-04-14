@class NSString;

@interface CIColor : NSObject <NSSecureCoding, NSCopying> {
    void *_priv;
    void *_pad[3];
}

@property (class, readonly) CIColor *blackColor;
@property (class, readonly) CIColor *whiteColor;
@property (class, readonly) CIColor *grayColor;
@property (class, readonly) CIColor *redColor;
@property (class, readonly) CIColor *greenColor;
@property (class, readonly) CIColor *blueColor;
@property (class, readonly) CIColor *cyanColor;
@property (class, readonly) CIColor *magentaColor;
@property (class, readonly) CIColor *yellowColor;
@property (class, readonly) CIColor *clearColor;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long numberOfComponents;
@property (readonly) const double *components;
@property (readonly) double alpha;
@property (readonly) struct CGColorSpace { } *colorSpace;
@property (readonly) double red;
@property (readonly) double green;
@property (readonly) double blue;
@property (readonly) NSString *stringRepresentation;

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 colorSpace:(struct CGColorSpace { } *)a3;
+ (id)colorWithString:(id)a0;

- (id)CA_interpolateValue:(id)a0 byFraction:(float)a1;
- (double)CA_distanceToValue:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (id)CA_addValue:(id)a0 multipliedBy:(int)a1;
- (id)CAMLType;
- (id)debugQuickLookObject;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (struct CGColor { } *)cgColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct CGColor { } *)rgbColor;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 colorSpace:(struct CGColorSpace { } *)a3;

@end
