@class NSString, WFColor, WFIconBackground;

@interface WFSymbolIcon : WFIcon

@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) WFColor *symbolColor;
@property (readonly, nonatomic) WFIconBackground *background;

+ (char)supportsSecureCoding;
+ (id)symbolIconForActionIdentifier:(id)a0 bundleIdentifier:(id)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)iconWithSymbolColor:(id)a0 background:(id)a1;
- (id)initWithSymbolName:(id)a0 symbolColor:(id)a1;
- (char)hasClearBackground;
- (char)hasTransparentBackground;
- (id)initWithSymbolName:(id)a0 background:(id)a1;
- (id)initWithSymbolName:(id)a0 symbolColor:(id)a1 background:(id)a2;

@end
