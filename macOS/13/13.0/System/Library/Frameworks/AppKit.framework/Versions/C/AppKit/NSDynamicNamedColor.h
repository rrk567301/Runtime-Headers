@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor

@property (readonly) NSColor *resolvedColor;

- (Class)classForCoder;
- (void)set;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (double)alphaComponent;
- (id)colorUsingType:(long long)a0;
- (BOOL)isUniform;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)setFill;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;

@end
