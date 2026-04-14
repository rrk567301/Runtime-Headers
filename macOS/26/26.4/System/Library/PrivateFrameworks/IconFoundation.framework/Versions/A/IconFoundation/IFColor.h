@class CIColor, NSUUID;

@interface IFColor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGColor { } *cgColor;
@property (readonly) CIColor *ciColor;
@property (readonly) NSUUID *digest;

+ (struct CGColorSpace { } *)deviceExtendedRGBColorSpace;
+ (struct CGColorSpace { } *)deviceGreyColorSpace;
+ (struct CGColorSpace { } *)deviceSRGBColorSpace;
+ (struct CGColorSpace { } *)deviceRGBColorSpace;
+ (struct CGColorSpace { } *)deviceExtendedDisplayP3ColorSpace;
+ (struct CGColorSpace { } *)deviceDisplayP3ColorSpace;
+ (id)borderColorForAppearance:(long long)a0;
+ (id)white;
+ (id)black;

- (struct CGColor { } *)cgColor;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)_initWithColorStr:(id)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCIColor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSystemColor:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (void).cxx_destruct;
- (id)initWithSystemColor:(long long)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (id)blendColorWithFraction:(double)a0 ofColor:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
