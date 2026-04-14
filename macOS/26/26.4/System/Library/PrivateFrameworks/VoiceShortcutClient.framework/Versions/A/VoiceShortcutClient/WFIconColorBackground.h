@class WFColor;

@interface WFIconColorBackground : WFIconBackground

@property (class, readonly, nonatomic) WFIconColorBackground *clearBackground;

@property (readonly, nonatomic) WFColor *color;
@property (readonly, nonatomic) long long blendMode;

+ (BOOL)supportsSecureCoding;

- (id)initWithColor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithColor:(id)a0 blendMode:(long long)a1;

@end
