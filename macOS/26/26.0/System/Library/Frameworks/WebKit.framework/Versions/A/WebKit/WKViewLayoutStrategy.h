@interface WKViewLayoutStrategy : NSObject {
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _page;
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webViewImpl;
    struct WeakObjCPtr<NSView> { id m_weakReference; } _view;
    unsigned int _layoutMode;
}

@property (readonly, nonatomic) unsigned int layoutMode;

+ (id)layoutStrategyWithPage:(struct reference_wrapper<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 view:(id)a1 viewImpl:(struct reference_wrapper<WebKit::WebViewImpl> { struct WebViewImpl *x0; })a2 mode:(unsigned int)a3;

- (void)updateLayout;
- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didChangeFrameSize;
- (void)didChangeViewScale;
- (void)didEndLiveResize;
- (void)disableFrameSizeUpdates;
- (void)enableFrameSizeUpdates;
- (BOOL)frameSizeUpdatesDisabled;
- (id)initWithPage:(struct reference_wrapper<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 view:(id)a1 viewImpl:(struct reference_wrapper<WebKit::WebViewImpl> { struct WebViewImpl *x0; })a2 mode:(unsigned int)a3;
- (void)willChangeLayoutStrategy;
- (void)willStartLiveResize;

@end
