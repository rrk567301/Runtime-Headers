@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor

@property (readonly) NSColor *resolvedColor;

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (double)alphaComponent;
- (void)setFill;
- (id)colorWithAlphaComponent:(double)a0;
- (void)set;
- (Class)classForCoder;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;

@end
