@class WFGradient;

@interface WFIconGradientBackground : WFIconBackground

@property (readonly, nonatomic) WFGradient *gradient;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithGradient:(id)a0;

@end
