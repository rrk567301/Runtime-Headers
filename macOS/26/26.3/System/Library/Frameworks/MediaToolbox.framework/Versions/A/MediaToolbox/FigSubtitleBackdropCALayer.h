@interface FigSubtitleBackdropCALayer : FigBaseCALayer {
    struct OpaqueFigSubtitleBackdropCALayerInternal { id x0; id x1; BOOL x2; BOOL x3; double x4; id x5; id x6; id x7; } *bdLayerInternal;
}

- (void)setNeedsDisplay;
- (void)setContents:(id)a0;
- (void)setCornerRadius:(double)a0;
- (void)setNeedsLayout;
- (void)setDelegate:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)_addBoundsAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)dealloc;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)_addPositionAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (BOOL)shouldEnableBackdropLayer;
- (void)updateBackdropLayer;
- (void)updateHDRContentState:(BOOL)a0;
- (void)updateWindowOpacity:(double)a0;

@end
