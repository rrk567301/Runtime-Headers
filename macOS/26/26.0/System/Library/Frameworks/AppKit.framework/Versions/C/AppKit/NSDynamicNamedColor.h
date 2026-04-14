@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor

@property (readonly) NSColor *resolvedColor;

- (struct CGColor { } *)CGColor;
- (Class)classForCoder;
- (double)alphaComponent;
- (void)set;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (void)setFill;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;

@end
