@class EQKitBox;

@interface EQKitOverlayBox : EQKitBox

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) EQKitBox *overlayBox;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)width;
- (double)depth;
- (id)description;
- (double)height;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithBox:(id)a0 overlayBox:(id)a1;
- (BOOL)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
