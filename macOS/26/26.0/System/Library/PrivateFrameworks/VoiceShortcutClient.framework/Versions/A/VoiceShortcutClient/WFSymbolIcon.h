@class WFColor, NSString, NSArray, WFIconBackground;

@interface WFSymbolIcon : WFIcon

@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) WFColor *symbolColor;
@property (readonly, nonatomic) NSString *renderingMode;
@property (readonly, nonatomic) NSArray *symbolColors;
@property (readonly, nonatomic) WFIconBackground *background;

+ (BOOL)supportsSecureCoding;
+ (id)symbolIconForActionIdentifier:(id)a0 bundleIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSymbolName:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)iconWithSymbolColor:(id)a0 background:(id)a1;
- (id)initWithSymbolName:(id)a0 symbolColor:(id)a1;
- (BOOL)hasClearBackground;
- (BOOL)hasTransparentBackground;
- (id)initWithSymbolName:(id)a0 background:(id)a1;
- (id)initWithSymbolName:(id)a0 renderingMode:(id)a1 symbolColors:(id)a2;
- (id)initWithSymbolName:(id)a0 renderingMode:(id)a1 symbolColors:(id)a2 background:(id)a3;
- (id)initWithSymbolName:(id)a0 symbolColor:(id)a1 background:(id)a2;

@end
