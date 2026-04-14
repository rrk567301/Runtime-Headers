@class TSWPEquationInlineLayout, TSWPEquationInfo;

@interface TSWPEquationInlineRep : TSWPEquationBaseRep

@property (readonly, nonatomic) TSWPEquationInlineLayout *equationLayout;
@property (readonly, nonatomic) TSWPEquationInfo *equationInfo;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (BOOL)isPlaceholder;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)willBeRemoved;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (BOOL)canDrawInParallel;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (BOOL)shouldAllowReplacementFromPaste;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (BOOL)canPasteDataFromPhysicalKeyboard:(id)a0;
- (BOOL)p_shouldFlipShadowsInContext:(struct CGContext { } *)a0 forLayer:(BOOL)a1;
- (void)drawErrorIconInContext:(struct CGContext { } *)a0;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(double)a3 withMask:(BOOL)a4 forLayer:(BOOL)a5 forShadow:(BOOL)a6 forHitTest:(BOOL)a7;
- (id)resizedGeometryForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
