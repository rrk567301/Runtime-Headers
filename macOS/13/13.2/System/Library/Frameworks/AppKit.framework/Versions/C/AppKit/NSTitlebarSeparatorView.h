@interface NSTitlebarSeparatorView : NSView {
    long long _type;
}

@property long long type;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_windowChangedKeyState;
- (int)_vibrancyBlendMode;
- (long long)layerContentsRedrawPolicy;
- (id)_cuiOptions;
- (BOOL)ignoreHitTest;

@end
