@class QLPreviewOverlayController;

@interface QLOverlayView : NSView {
    BOOL _hasBackground;
}

@property (weak) QLPreviewOverlayController *delegate;
@property BOOL hasBackground;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (void)mouseDown:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityChildren;
- (unsigned int)_CAViewFlags;
- (void)updateBackground;

@end
