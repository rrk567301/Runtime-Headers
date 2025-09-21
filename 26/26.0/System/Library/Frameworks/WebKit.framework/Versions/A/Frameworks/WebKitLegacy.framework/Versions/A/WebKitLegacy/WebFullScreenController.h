@class WebWindowFadeAnimation, NSView, WebWindowScaleAnimation, WebView, NSWindow;

@interface WebFullScreenController : NSWindowController {
    struct RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> { struct Element *m_ptr; } _element;
    WebView *_webView;
    struct RetainPtr<NSView> { NSView *m_ptr; } _webViewPlaceholder;
    struct RetainPtr<WebWindowScaleAnimation> { WebWindowScaleAnimation *m_ptr; } _scaleAnimation;
    struct RetainPtr<WebWindowFadeAnimation> { WebWindowFadeAnimation *m_ptr; } _fadeAnimation;
    struct RetainPtr<NSWindow> { NSWindow *m_ptr; } _backgroundWindow;
    struct IntPoint { int m_x; int m_y; } _scrollPosition;
    float _savedScale;
    BOOL _isEnteringFullScreen;
    struct CompletionHandler<void (bool)> { struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { void *__ptr_; } m_callableWrapper; } m_function; } _didEnterFullscreen;
    struct CompletionHandler<void ()> { struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__ptr_; } m_callableWrapper; } m_function; } _exitCompletionHandler;
    BOOL _isFullScreen;
}

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalFrame;

- (void)windowDidLoad;
- (id)webView;
- (void)cancelOperation:(id)a0;
- (void)dealloc;
- (id)init;
- (void)setElement:(void *)a0;
- (id).cxx_construct;
- (void *)element;
- (void)close;
- (void).cxx_destruct;
- (void *)_manager;
- (void)animationDidEnd:(id)a0;
- (void)applicationDidChangeScreenParameters:(id)a0;
- (void)applicationDidResignActive:(id)a0;
- (void)performClose:(id)a0;
- (void)setWebView:(id)a0;
- (BOOL)isFullScreen;
- (void)_swapView:(id)a0 with:(id)a1;
- (void)_updateMenuAndDockForFullScreen;
- (void)exitFullScreen:(void *)a0;
- (struct NakedPtr<WebCore::Document> { struct Document *x0; })_document;
- (void)_startEnterFullScreenAnimationWithDuration:(double)a0;
- (void)_startExitFullScreenAnimationWithDuration:(double)a0;
- (void)enterFullScreen:(id)a0 willEnterFullscreen:(void *)a1 didEnterFullscreen:(void *)a2;
- (void)finishedEnterFullScreenAnimation:(BOOL)a0;
- (void)finishedExitFullScreenAnimation:(BOOL)a0;
- (void)requestExitFullScreen;
- (id)webViewPlaceholder;

@end
