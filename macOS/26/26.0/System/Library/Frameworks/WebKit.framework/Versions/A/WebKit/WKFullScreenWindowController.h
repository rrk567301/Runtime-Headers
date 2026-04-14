@class NSArray, NSString, NSView, NSTimer, WebCoreFullScreenPlaceholderView;

@interface WKFullScreenWindowController : NSWindowController <NSWindowDelegate> {
    struct WeakObjCPtr<NSView> { id m_weakReference; } _webView;
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _page;
    struct RetainPtr<WebCoreFullScreenPlaceholderView> { WebCoreFullScreenPlaceholderView *m_ptr; } _webViewPlaceholder;
    struct RetainPtr<NSView> { NSView *m_ptr; } _exitPlaceholder;
    struct RetainPtr<NSView> { NSView *m_ptr; } _clipView;
    struct RetainPtr<NSView> { NSView *m_ptr; } _backgroundView;
    struct RetainPtr<NSTimer> { NSTimer *m_ptr; } _watchdogTimer;
    struct RetainPtr<NSArray> { NSArray *m_ptr; } _savedConstraints;
    long long _fullScreenState;
    struct CompletionHandler<void (bool)> { struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { void *__ptr_; } m_callableWrapper; } m_function; } _enterFullScreenCompletionHandler;
    struct CompletionHandler<void ()> { struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__ptr_; } m_callableWrapper; } m_function; } _beganExitFullScreenCompletionHandler;
    struct CompletionHandler<void ()> { struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__ptr_; } m_callableWrapper; } m_function; } _exitFullScreenCompletionHandler;
    double _savedScale;
    struct RectEdges<float> { struct array<float, 4UL> { float __elems_[4]; } m_sides; } _savedObscuredContentInsets;
    struct unique_ptr<WTF::Observer<void (bool)>, std::default_delete<WTF::Observer<void (bool)>>> { void *__ptr_; } _pipObserver;
    struct RefPtr<WTF::Logger, WTF::RawPtrTraits<WTF::Logger>, WTF::DefaultRefDerefTraits<WTF::Logger>> { struct Logger *m_ptr; } _logger;
    unsigned long long _logIdentifier;
}

@property (readonly, nonatomic) unsigned long long logIdentifier;
@property (readonly, nonatomic) const void *loggerPtr;
@property (readonly, nonatomic) struct { unsigned char x0; char *x1; unsigned char x2; char *x3; id x4; } *logChannel;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalFrame;
@property NSArray *savedConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowDidFailToEnterFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (void)noResponderFor:(SEL)a0;
- (void)cancelOperation:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void *)_manager;
- (id)customWindowsToEnterFullScreenForWindow:(id)a0;
- (id)customWindowsToExitFullScreenForWindow:(id)a0;
- (id)destinationWindowToExitFullScreenForWindow:(id)a0;
- (void)performClose:(id)a0;
- (void)window:(id)a0 startCustomAnimationToEnterFullScreenWithDuration:(double)a1;
- (void)window:(id)a0 startCustomAnimationToExitFullScreenWithDuration:(double)a1;
- (void)windowDidFailToExitFullScreen:(id)a0;
- (BOOL)isFullScreen;
- (void)exitFullScreen:(void *)a0;
- (void)_startEnterFullScreenAnimationWithDuration:(double)a0;
- (void)_startExitFullScreenAnimationWithDuration:(double)a0;
- (void)enterFullScreen:(void *)a0;
- (void)finishedEnterFullScreenAnimation:(BOOL)a0;
- (void)requestExitFullScreen;
- (id)webViewPlaceholder;
- (void)_continueEnteringFullscreenAfterPostingNotification:(void *)a0;
- (void)_continueExitingFullscreenAfterPostingNotificationAndExitImmediately:(BOOL)a0;
- (struct RefPtr<WebKit::WebFullScreenManagerProxy, WTF::RawPtrTraits<WebKit::WebFullScreenManagerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebFullScreenManagerProxy>> { struct WebFullScreenManagerProxy *x0; })_protectedManager;
- (void)_replaceView:(id)a0 with:(id)a1;
- (void)_saveConstraintsOf:(id)a0;
- (void *)_videoPresentationManager;
- (void)_watchdogTimerFired:(id)a0;
- (void)beganEnterFullScreenWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(void *)a2;
- (void)beganExitFullScreenWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(void *)a2;
- (void)clearVideoPresentationManagerObserver;
- (void)completeFinishExitFullScreenAnimation;
- (void)didEnterPictureInPicture;
- (void)didExitPictureInPicture;
- (void)exitFullScreenImmediately;
- (void)finishedExitFullScreenAnimationAndExitImmediately:(BOOL)a0;
- (id)initWithWindow:(id)a0 webView:(id)a1 page:(struct reference_wrapper<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a2;
- (void)setVideoPresentationManagerObserver;
- (void)videoControlsManagerDidChange;

@end
