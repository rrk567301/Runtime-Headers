@interface EQKitVBox : EQKitCompoundBox

@property (readonly, nonatomic) unsigned long long pivotIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithChildBoxes:(id)a0;
- (id)initWithChildBoxes:(id)a0 pivotIndex:(unsigned long long)a1;
- (void)p_cacheDimensionsForHeight:(double *)a0 depth:(double *)a1 width:(double *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cacheErasableBounds;
- (char)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
