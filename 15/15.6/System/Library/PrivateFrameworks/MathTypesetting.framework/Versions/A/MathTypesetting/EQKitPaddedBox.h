@class EQKitBox;

@interface EQKitPaddedBox : EQKitBox {
    double _width;
    double _height;
    double _depth;
}

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) double lspace;
@property (readonly, nonatomic) double voffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)depth;
- (double)height;
- (double)width;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithBox:(id)a0 height:(double)a1 width:(double)a2 depth:(double)a3 lspace:(double)a4 voffset:(double)a5;
- (double)opticalAlignWidth;
- (char)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (char)canContainBoxes;
- (id)containedBoxes;

@end
