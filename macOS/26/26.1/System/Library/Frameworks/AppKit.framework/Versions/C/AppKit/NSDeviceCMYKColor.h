@interface NSDeviceCMYKColor : NSColor {
    double cyanComponent;
    double magentaComponent;
    double yellowComponent;
    double blackComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)setFill;
- (long long)type;
- (unsigned long long)hash;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorSpace;
- (id)colorSpaceName;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct CGColor { } *)CGColor;
- (void)dealloc;
- (void)set;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)setStroke;
- (long long)numberOfComponents;
- (double)alphaComponent;
- (BOOL)isEqual:(id)a0;
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
