@class NSString;

@interface WKSafeBrowsingWarning : WKSafeBrowsingBox <NSTextViewDelegate, NSAccessibilityGroup> {
    struct CompletionHandler<void (std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct Function<void (std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>> { void *__value_; } __ptr_; } m_callableWrapper; } m_function; } _completionHandler;
    struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>> { struct SafeBrowsingWarning *m_ptr; } _warning;
    struct WeakObjCPtr<WKSafeBrowsingTextView> { id m_weakReference; } _details;
    struct WeakObjCPtr<WKSafeBrowsingBox> { id m_weakReference; } _box;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 safeBrowsingWarning:(const void *)a1 completionHandler:(void *)a2;
- (BOOL)forMainFrameNavigation;
- (void)addContent;
- (void)showDetailsClicked;
- (void)goBackClicked;
- (void)layoutText;
- (void)clickedOnLink:(id)a0;

@end
