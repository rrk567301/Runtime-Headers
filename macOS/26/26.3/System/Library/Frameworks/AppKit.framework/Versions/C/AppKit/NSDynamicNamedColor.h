@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor

@property (readonly) NSColor *resolvedColor;

- (id)colorWithAlphaComponent:(double)a0;
- (double)alphaComponent;
- (void)setStroke;
- (void)set;
- (void)setFill;
- (struct CGColor { } *)CGColor;
- (Class)classForCoder;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;

@end
