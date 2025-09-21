@interface FigSubtitleBackdropCALayer : FigBaseCALayer {
    struct OpaqueFigSubtitleBackdropCALayerInternal { id x0; id x1; char x2; char x3; double x4; id x5; id x6; id x7; } *bdLayerInternal;
}

- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)setNeedsDisplay;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContents:(id)a0;
- (void)setCornerRadius:(double)a0;
- (void)setNeedsLayout;
- (void)_addBoundsAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)_addPositionAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (char)shouldEnableBackdropLayer;
- (void)updateBackdropLayer;
- (void)updateHDRContentState:(char)a0;
- (void)updateWindowOpacity:(double)a0;

@end
