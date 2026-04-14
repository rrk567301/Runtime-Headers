@class NSString, WFColor, WFIconBackground;

@interface WFSymbolIcon : WFIcon

@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) WFColor *symbolColor;
@property (readonly, nonatomic) WFIconBackground *background;

+ (BOOL)supportsSecureCoding;
+ (id)cachedGlyphSizes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSymbolName:(id)a0 background:(id)a1;
- (BOOL)hasClearBackground;
- (id)initWithSymbolName:(id)a0 symbolColor:(id)a1 background:(id)a2;
- (struct CGSize { double x0; double x1; })imageSizeAtPointSize:(double)a0 scale:(double)a1;

@end
