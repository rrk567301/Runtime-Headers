@interface GCColor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) float red;
@property (readonly) float green;
@property (readonly) float blue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;
- (id)initWithColorPreset:(long long)a0;

@end
