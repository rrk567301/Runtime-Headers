@class NSString, NSPanGestureRecognizer;

@interface WKPanGestureController : NSObject <NSGestureRecognizerDelegate> {
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _page;
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _viewImpl;
    struct RetainPtr<NSPanGestureRecognizer> { NSPanGestureRecognizer *m_ptr; } _panGestureRecognizer;
    BOOL _isMomentumActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)configureForScrolling:(id)a0;
- (void)enablePanGestureIfNeeded;
- (id)initWithPage:(struct reference_wrapper<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 viewImpl:(struct reference_wrapper<WebKit::WebViewImpl> { struct WebViewImpl *x0; })a1;
- (void)interruptMomentumIfNeeded;
- (void)panGestureRecognized:(id)a0;
- (void)sendWheelEventForGesture:(id)a0;
- (void)startMomentumIfNeededForGesture:(id)a0;

@end
