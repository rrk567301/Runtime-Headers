@class EQKitBox;

@interface EQKitOverlayBox : EQKitBox

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) EQKitBox *overlayBox;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)width;
- (double)height;
- (double)depth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithBox:(id)a0 overlayBox:(id)a1;

@end
