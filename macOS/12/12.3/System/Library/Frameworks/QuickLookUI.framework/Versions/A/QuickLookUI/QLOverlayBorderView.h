@interface QLOverlayBorderView : NSView {
    BOOL _setup;
}

+ (id)overlayBorderColor;

- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)_CAViewFlags;
- (void)updateOverlayBorder;

@end
