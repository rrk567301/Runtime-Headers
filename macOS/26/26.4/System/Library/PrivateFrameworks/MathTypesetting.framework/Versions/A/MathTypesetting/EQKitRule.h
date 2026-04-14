@interface EQKitRule : EQKitBox {
    double _height;
    double _depth;
    double _width;
    struct CGColor { } *_cgColor;
}

- (double)depth;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (struct CGColor { } *)color;
- (double)height;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (double)width;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithHeight:(double)a0 depth:(double)a1 width:(double)a2 cgColor:(struct CGColor { } *)a3;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
