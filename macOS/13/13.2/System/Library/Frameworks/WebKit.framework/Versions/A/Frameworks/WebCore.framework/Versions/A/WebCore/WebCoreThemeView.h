@interface WebCoreThemeView : NSControl {
    struct RetainPtr<WebCoreThemeWindow> { void *m_ptr; } _window;
}

- (id)init;
- (void).cxx_destruct;
- (id)window;
- (id).cxx_construct;
- (void)addSubview:(id)a0;
- (BOOL)isFlipped;
- (id)currentEditor;
- (BOOL)_automaticFocusRingDisabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRingVisibleRect;
- (id)_focusRingClipAncestor;

@end
