@interface NSTitlebarSeparatorView : NSView {
    long long _type;
}

@property long long type;

- (BOOL)allowsVibrancy;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_windowChangedKeyState;
- (int)_vibrancyBlendMode;
- (long long)layerContentsRedrawPolicy;
- (BOOL)ignoreHitTest;
- (id)_cuiOptions;

@end
