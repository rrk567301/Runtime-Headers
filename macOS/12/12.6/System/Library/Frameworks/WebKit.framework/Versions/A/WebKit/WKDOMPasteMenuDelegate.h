@class NSString;

@interface WKDOMPasteMenuDelegate : NSObject <NSMenuDelegate> {
    struct WeakPtr<WebKit::WebViewImpl, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _impl;
    unsigned char _category;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)numberOfItemsInMenu:(id)a0;
- (void)menuDidClose:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })confinementRectForMenu:(id)a0 onScreen:(id)a1;
- (id)initWithWebViewImpl:(void *)a0 pasteAccessCategory:(unsigned char)a1;
- (void)_web_grantDOMPasteAccess;

@end
