@interface WebCoreThemeView : NSControl {
    struct RetainPtr<WebCoreThemeWindow> { void *m_ptr; } _window;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)window;
- (BOOL)isFlipped;
- (void)addSubview:(id)a0;
- (id)_focusRingClipAncestor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRingVisibleRect;
- (id)currentEditor;
- (BOOL)_automaticFocusRingDisabled;

@end
