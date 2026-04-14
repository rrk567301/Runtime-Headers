@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor

@property (readonly) NSColor *resolvedColor;

- (void)setStroke;
- (double)alphaComponent;
- (void)setFill;
- (void)set;
- (id)colorWithAlphaComponent:(double)a0;
- (struct CGColor { } *)CGColor;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (Class)classForCoder;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;

@end
