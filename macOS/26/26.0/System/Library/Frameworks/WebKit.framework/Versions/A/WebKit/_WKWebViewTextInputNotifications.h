@interface _WKWebViewTextInputNotifications : NSObject {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webView;
    unsigned char _caretType;
}

- (id).cxx_construct;
- (id)initWithWebView:(void *)a0;
- (void).cxx_destruct;
- (void)dictationDidEnd;
- (unsigned char)caretType;
- (void)dictationDidPause;
- (void)dictationDidResume;
- (void)dictationDidStart;

@end
