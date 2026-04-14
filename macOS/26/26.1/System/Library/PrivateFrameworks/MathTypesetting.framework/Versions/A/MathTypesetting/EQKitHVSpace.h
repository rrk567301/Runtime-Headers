@interface EQKitHVSpace : EQKitBox {
    double _width;
    double _height;
    double _depth;
}

- (double)depth;
- (id)description;
- (double)height;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)width;
- (BOOL)isEqual:(id)a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithWidth:(double)a0 height:(double)a1 depth:(double)a2;
- (double)layoutDepth;
- (double)layoutHeight;

@end
