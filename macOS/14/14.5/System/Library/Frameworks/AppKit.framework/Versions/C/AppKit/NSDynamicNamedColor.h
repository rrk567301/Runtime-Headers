@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor

@property (readonly) NSColor *resolvedColor;

- (void)set;
- (Class)classForCoder;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (id)colorUsingType:(long long)a0;
- (void)setFill;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (double)alphaComponent;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)colorWithAlphaComponent:(double)a0;
- (BOOL)isUniform;

@end
