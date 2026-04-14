@interface NSTitlebarSeparatorView : NSView {
    long long _type;
}

@property long long type;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (BOOL)allowsVibrancy;
- (id)_cuiOptions;
- (int)_vibrancyBlendMode;
- (void)_windowChangedKeyState;
- (BOOL)ignoreHitTest;
- (long long)layerContentsRedrawPolicy;
- (BOOL)wantsUpdateLayer;

@end
