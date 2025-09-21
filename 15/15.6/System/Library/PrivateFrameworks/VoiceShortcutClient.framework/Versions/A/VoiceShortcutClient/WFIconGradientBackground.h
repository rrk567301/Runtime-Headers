@class WFGradient;

@interface WFIconGradientBackground : WFIconBackground

@property (readonly, nonatomic) WFGradient *gradient;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGradient:(id)a0;

@end
