@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor

@property (readonly) NSColor *resolvedColor;

- (void)setFill;
- (id)colorWithAlphaComponent:(double)a0;
- (Class)classForCoder;
- (struct CGColor { } *)CGColor;
- (void)set;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)setStroke;
- (double)alphaComponent;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;

@end
