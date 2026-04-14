@interface NSEphemeralMorphingWindow : _NSSlideAndCrossFadeAnimationProjectionWindow {
    void /* unknown type, empty encoding */ sourceView;
    void /* unknown type, empty encoding */ destinationWindow;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_overrideDefeatingConstrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1 fullScreenConstrainToTile:(BOOL)a2;
- (id)initWithBeforeLayer:(id)a0 initialScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 afterLayer:(id)a3 initialScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 finalScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)initWithSourceView:(id)a0 destinationWindow:(id)a1;
- (void)startAnimationWithDuration:(double)a0 completionHandler:(id /* block */)a1;

@end
