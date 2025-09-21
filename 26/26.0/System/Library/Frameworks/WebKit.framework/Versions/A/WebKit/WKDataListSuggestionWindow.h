@class NSVisualEffectView;

@interface WKDataListSuggestionWindow : NSWindow {
    struct RetainPtr<NSVisualEffectView> { NSVisualEffectView *m_ptr; } _backdropView;
}

- (BOOL)canBecomeKeyWindow;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)hasKeyAppearance;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (unsigned long long)shadowOptions;
- (void)adjustWindowIfNeeded;

@end
