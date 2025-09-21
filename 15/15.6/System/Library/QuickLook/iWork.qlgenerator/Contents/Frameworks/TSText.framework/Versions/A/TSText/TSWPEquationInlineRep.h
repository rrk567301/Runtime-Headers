@class TSWPEquationInlineLayout, TSWPEquationInfo;

@interface TSWPEquationInlineRep : TSWPEquationBaseRep

@property (readonly, nonatomic) TSWPEquationInlineLayout *equationLayout;
@property (readonly, nonatomic) TSWPEquationInfo *equationInfo;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (char)isPlaceholder;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)willBeRemoved;
- (char)shouldAllowReplacementFromPaste;
- (char)canDrawInParallel;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(char)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(char)a3 forAlphaOnly:(char)a4 drawChildren:(char)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (char)canPasteDataFromPhysicalKeyboard:(id)a0;
- (void)drawErrorIconInContext:(struct CGContext { } *)a0;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(char)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(double)a3 withMask:(char)a4 forLayer:(char)a5 forShadow:(char)a6 forHitTest:(char)a7;
- (char)p_shouldFlipShadowsInContext:(struct CGContext { } *)a0 forLayer:(char)a1;
- (id)resizedGeometryForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
