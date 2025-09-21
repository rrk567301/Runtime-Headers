@class CIColor, NSUUID;

@interface IFColor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGColor { } *cgColor;
@property (readonly) CIColor *ciColor;
@property (readonly) NSUUID *digest;

+ (id)black;
+ (struct CGColorSpace { } *)deviceExtendedDisplayP3ColorSpace;
+ (struct CGColorSpace { } *)deviceRGBColorSpace;
+ (id)white;
+ (struct CGColorSpace { } *)deviceGreyColorSpace;
+ (struct CGColorSpace { } *)deviceDisplayP3ColorSpace;
+ (struct CGColorSpace { } *)deviceSRGBColorSpace;
+ (id)borderColorForAppearance:(long long)a0;
+ (struct CGColorSpace { } *)deviceExtendedRGBColorSpace;

- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (struct CGColor { } *)cgColor;
- (id)initWithSystemColor:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithColorStr:(id)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (id)description;
- (id)initWithSystemColor:(long long)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (id)blendColorWithFraction:(double)a0 ofColor:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithCIColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
