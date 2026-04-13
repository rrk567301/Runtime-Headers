@interface WebCoreThemeView : NSControl

- (id)window;
- (BOOL)isFlipped;
- (void)addSubview:(id)a0;
- (id)_focusRingClipAncestor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRingVisibleRect;
- (id)currentEditor;
- (BOOL)_automaticFocusRingDisabled;

@end
