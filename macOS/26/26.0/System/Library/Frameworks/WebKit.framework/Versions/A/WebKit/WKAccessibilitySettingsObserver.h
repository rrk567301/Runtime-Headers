@interface WKAccessibilitySettingsObserver : NSObject {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _impl;
}

- (id)initWithImpl:(void *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_settingsDidChange:(id)a0;

@end
