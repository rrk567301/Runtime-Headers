@interface TSCHPresetImagerBarFamily : TSCHPresetImager

- (void)addRoundedCornerClipPathToContext:(struct CGContext { } *)a0 forPreset:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 isVertical:(char)a3;
- (char)hasRoundedCornersForPreset:(id)a0;
- (void)p_drawBarInContext:(struct CGContext { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 stroke:(id)a2 fill:(id)a3;
- (void)renderInRoundedCornerClippedContext:(struct CGContext { } *)a0 forPreset:(id)a1 stroke:(id)a2 barRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 isVertical:(char)a5 renderBlock:(id /* block */)a6;
- (struct CGPath { } *)roundedCornerClippingPathForPreset:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isVertical:(char)a2;

@end
