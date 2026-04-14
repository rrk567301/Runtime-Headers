@class WFGradient;

@interface WFIconGradientBackground : WFIconBackground

@property (readonly, nonatomic) WFGradient *gradient;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithGradient:(id)a0;

@end
