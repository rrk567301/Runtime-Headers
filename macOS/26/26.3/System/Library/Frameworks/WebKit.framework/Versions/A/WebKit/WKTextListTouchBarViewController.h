@interface WKTextListTouchBarViewController : NSViewController {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webViewImpl;
}

@property (nonatomic) unsigned char currentListType;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_selectList:(id)a0;
- (void)didDestroyView;
- (id)initWithWebViewImpl:(void *)a0;

@end
