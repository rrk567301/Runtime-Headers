@class QLOverlayGlassBackground, QLOverlayProgressButtonLayer, QLPreviewOverlayController;

@interface QLOverlayView : NSView {
    BOOL _hasBackground;
    BOOL _expanded;
}

@property BOOL expanded;
@property (weak) QLPreviewOverlayController *delegate;
@property (weak) QLOverlayGlassBackground *playButtonBackground;
@property (weak) QLOverlayProgressButtonLayer *playButtonLayer;
@property BOOL hasBackground;

- (void)viewDidChangeEffectiveAppearance;
- (void)updateBackground;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)allowsVibrancy;
- (unsigned int)_CAViewFlags;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;

@end
