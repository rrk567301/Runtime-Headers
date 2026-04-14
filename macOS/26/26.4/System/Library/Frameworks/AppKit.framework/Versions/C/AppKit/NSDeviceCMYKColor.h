@interface NSDeviceCMYKColor : NSColor {
    double cyanComponent;
    double magentaComponent;
    double yellowComponent;
    double blackComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (id)colorSpaceName;
- (void)setStroke;
- (double)alphaComponent;
- (void)setFill;
- (void)set;
- (id)colorWithAlphaComponent:(double)a0;
- (struct CGColor { } *)CGColor;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)colorSpace;
- (long long)numberOfComponents;
- (unsigned long long)hash;
- (long long)type;
- (id)description;
- (Class)classForCoder;
- (void)dealloc;
- (id)colorUsingType:(long long)a0;
- (double)yellowComponent;
- (double)blackComponent;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (double)cyanComponent;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)getComponents:(double *)a0;
- (void)getCyan:(double *)a0 magenta:(double *)a1 yellow:(double *)a2 black:(double *)a3 alpha:(double *)a4;
- (id)initWithCyan:(double)a0 magenta:(double)a1 yellow:(double)a2 black:(double)a3 alpha:(double)a4;
- (BOOL)isUniform;
- (double)magentaComponent;

@end
