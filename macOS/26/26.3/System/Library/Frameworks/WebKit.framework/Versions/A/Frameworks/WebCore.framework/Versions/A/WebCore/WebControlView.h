@class WebControlWindow;

@interface WebControlView : NSControl {
    struct RetainPtr<WebControlWindow> { WebControlWindow *m_ptr; } _window;
}

@property (class) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clipBounds;

- (id)window;
- (void)addSubview:(id)a0;
- (BOOL)isFlipped;
- (id)currentEditor;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)_automaticFocusRingDisabled;
- (id)_focusRingClipAncestor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRingVisibleRect;
- (id)_viewRoot;

@end
