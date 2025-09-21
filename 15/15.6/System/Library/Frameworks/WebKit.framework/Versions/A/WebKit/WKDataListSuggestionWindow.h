@interface WKDataListSuggestionWindow : NSWindow {
    struct RetainPtr<NSVisualEffectView> { void *m_ptr; } _backdropView;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)canBecomeKeyWindow;
- (char)hasKeyAppearance;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (unsigned long long)shadowOptions;

@end
