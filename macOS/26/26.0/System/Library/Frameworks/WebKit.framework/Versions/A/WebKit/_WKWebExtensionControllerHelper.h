@interface _WKWebExtensionControllerHelper : NSObject {
    struct WeakPtr<WebKit::WebExtensionController, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webExtensionController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWebExtensionController:(void *)a0;
- (void)_didDeleteLocalStorage:(id)a0;

@end
