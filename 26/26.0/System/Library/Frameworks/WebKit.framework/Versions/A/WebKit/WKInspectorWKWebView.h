@protocol WKInspectorWKWebViewDelegate;

@interface WKInspectorWKWebView : WKWebView {
    struct WeakObjCPtr<id<WKInspectorWKWebViewDelegate>> { id m_weakReference; } _inspectorWKWebViewDelegate;
}

@property (weak, nonatomic) id<WKInspectorWKWebViewDelegate> inspectorWKWebViewDelegate;

- (void)reloadFromOrigin:(id)a0;
- (long long)tag;
- (void)viewWillMoveToWindow:(id)a0;
- (void)dealloc;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToWindow;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_opaqueRectForWindowMoveWhenInTitlebar;
- (void)reload:(id)a0;
- (void)_handleWindowDidBecomeKey:(id)a0;

@end
