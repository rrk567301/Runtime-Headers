@class WFColor, WFGradient;

@interface WFAppShortcutColors : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WFGradient *backgroundGradient;
@property (readonly, nonatomic) WFColor *tintColor;
@property (readonly, nonatomic) char isDefaultTintColor;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithComplementingColors:(id)a0 tintColor:(id)a1;

@end
