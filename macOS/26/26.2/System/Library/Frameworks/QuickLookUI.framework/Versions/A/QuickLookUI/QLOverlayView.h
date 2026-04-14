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

- (void)mouseDown:(id)a0;
- (void).cxx_destruct;
- (void)updateBackground;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (unsigned int)_CAViewFlags;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;

@end
