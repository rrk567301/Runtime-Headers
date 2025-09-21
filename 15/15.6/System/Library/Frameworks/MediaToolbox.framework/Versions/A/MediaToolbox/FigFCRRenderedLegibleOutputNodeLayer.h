@interface FigFCRRenderedLegibleOutputNodeLayer : FigBaseCALayer {
    struct OpaqueFigCaptionRendererRenderedLegibleOutputNodeLayerInternal { id x0; struct CGImage *x1; double x2; id x3; id x4; BOOL x5; } *layerInternal;
}

- (void)dealloc;
- (id)init;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContents:(id)a0;
- (void)setCornerRadius:(double)a0;
- (void)_addBoundsAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)_addPositionAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)setNodeOptions:(id)a0 forKeyPath:(id)a1;
- (void)setNodeSeparated:(char)a0;
- (void)setWindowOpacity:(double)a0;

@end
