@interface NSDeviceCMYKColor : NSColor {
    double cyanComponent;
    double magentaComponent;
    double yellowComponent;
    double blackComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (struct CGColor { } *)CGColor;
- (id)colorSpace;
- (void)dealloc;
- (Class)classForCoder;
- (double)alphaComponent;
- (void)set;
- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (void)setFill;
- (long long)numberOfComponents;
- (id)description;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)colorSpaceName;
- (double)yellowComponent;
- (id)colorUsingType:(long long)a0;
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
