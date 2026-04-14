@class NSString;

@interface _WKWarningView : _WKWarningViewBox <NSTextViewDelegate, NSAccessibilityGroup> {
    struct CompletionHandler<void (mpark::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct Function<void (mpark::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, mpark::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, mpark::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> { void *__ptr_; } m_callableWrapper; } m_function; } _completionHandler;
    struct WeakObjCPtr<_WKWarningViewTextView> { id m_weakReference; } _details;
    struct WeakObjCPtr<_WKWarningViewBox> { id m_weakReference; } _box;
}

@property (readonly, nonatomic) struct RefPtr<const WebKit::BrowsingWarning, WTF::RawPtrTraits<const WebKit::BrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::BrowsingWarning>> { struct BrowsingWarning *m_ptr; } warning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (void)continueClicked;
- (struct RefPtr<const WebKit::BrowsingWarning, WTF::RawPtrTraits<const WebKit::BrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::BrowsingWarning>> { struct BrowsingWarning *x0; })_protectedWarning;
- (void)addContent;
- (void)clickedOnLink:(id)a0;
- (BOOL)forMainFrameNavigation;
- (void)goBackClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 browsingWarning:(const void *)a1 completionHandler:(void *)a2;
- (void)layoutText;
- (void)showDetailsClicked;

@end
