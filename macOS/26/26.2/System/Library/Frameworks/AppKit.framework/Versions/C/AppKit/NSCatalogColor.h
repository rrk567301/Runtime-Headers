@class NSString, NSColor;

@interface NSCatalogColor : NSColor {
    NSString *catalogNameComponent;
    NSString *colorNameComponent;
    NSColor *genericColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (double)alphaComponent;
- (void)setFill;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorSpaceName;
- (void)set;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (id)description;
- (void)dealloc;
- (id)colorUsingType:(long long)a0;
- (id)catalogNameComponent;
- (id)colorNameComponent;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSwatchOfColor:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (BOOL)isUniform;
- (id)localizedCatalogNameComponent;
- (id)localizedColorNameComponent;

@end
