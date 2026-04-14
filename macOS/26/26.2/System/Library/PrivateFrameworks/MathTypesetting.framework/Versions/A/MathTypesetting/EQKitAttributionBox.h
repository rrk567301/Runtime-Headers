@class EQKitSourceAttribution, EQKitBox;

@interface EQKitAttributionBox : EQKitBox

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) EQKitSourceAttribution *attribution;

- (double)height;
- (double)width;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (double)depth;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (double)opticalAlignWidth;
- (BOOL)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)canContainBoxes;
- (id)containedBoxes;
- (id)initWithBox:(id)a0 attribution:(id)a1;

@end
