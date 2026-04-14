@class CIColor, NSUUID;

@interface IFColor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGColor { } *cgColor;
@property (readonly) CIColor *ciColor;
@property (readonly) NSUUID *digest;

+ (struct CGColorSpace { } *)deviceExtendedDisplayP3ColorSpace;
+ (struct CGColorSpace { } *)deviceSRGBColorSpace;
+ (struct CGColorSpace { } *)deviceRGBColorSpace;
+ (struct CGColorSpace { } *)deviceExtendedRGBColorSpace;
+ (id)borderColorForAppearance:(long long)a0;
+ (id)black;
+ (struct CGColorSpace { } *)deviceDisplayP3ColorSpace;
+ (id)white;
+ (struct CGColorSpace { } *)deviceGreyColorSpace;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithSystemColor:(long long)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (struct CGColor { } *)cgColor;
- (id)blendColorWithFraction:(double)a0 ofColor:(id)a1;
- (id)description;
- (id)initWithCIColor:(id)a0;
- (id)_initWithColorStr:(id)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (id)initWithSystemColor:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
