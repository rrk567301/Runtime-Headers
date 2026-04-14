@class WebControlWindow;

@interface WebControlView : NSControl {
    struct RetainPtr<WebControlWindow> { WebControlWindow *m_ptr; } _window;
}

@property (class) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clipBounds;

- (void)addSubview:(id)a0;
- (id)currentEditor;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)window;
- (BOOL)isFlipped;
- (BOOL)_automaticFocusRingDisabled;
- (id)_focusRingClipAncestor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRingVisibleRect;
- (id)_viewRoot;

@end
