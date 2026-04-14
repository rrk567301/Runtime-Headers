@class NSString, WKIdentityDocumentPresentmentController, WKDigitalCredentialsPickerDelegate;
@protocol WKDigitalCredentialsPickerDelegate;

@interface WKDigitalCredentialsPicker : NSObject <WKDigitalCredentialsPickerDelegate, WKIdentityDocumentPresentmentDelegate> {
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _page;
    struct RetainPtr<WKDigitalCredentialsPickerDelegate> { WKDigitalCredentialsPickerDelegate *m_ptr; } _digitalCredentialsPickerDelegate;
    struct RetainPtr<WKIdentityDocumentPresentmentController> { WKIdentityDocumentPresentmentController *m_ptr; } _presentmentController;
    struct WeakObjCPtr<id<WKDigitalCredentialsPickerDelegate>> { id m_weakReference; } _delegate;
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
    struct CompletionHandler<void (std::experimental::expected<WebCore::DigitalCredentialsResponseData, WebCore::ExceptionData> &&)> { struct Function<void (std::experimental::expected<WebCore::DigitalCredentialsResponseData, WebCore::ExceptionData> &&)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, std::experimental::expected<WebCore::DigitalCredentialsResponseData, WebCore::ExceptionData> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::experimental::expected<WebCore::DigitalCredentialsResponseData, WebCore::ExceptionData> &&>>> { void *__ptr_; } m_callableWrapper; } m_function; } _completionHandler;
}

@property (weak, nonatomic) id<WKDigitalCredentialsPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performRequest:(const void *)a0;
- (id).cxx_construct;
- (void)dismiss;
- (void).cxx_destruct;
- (id)presentationAnchor;
- (void)completeWith:(void *)a0;
- (void)dismissWithCompletionHandler:(void *)a0;
- (void)fetchRawRequestsWithCompletionHandler:(id /* block */)a0;
- (void)handleNSError:(id)a0;
- (void)handlePresentmentCompletionWithResponse:(id)a0 error:(id)a1;
- (id)initWithView:(id)a0 page:(void *)a1;
- (void)presentWithRequestData:(const void *)a0 completionHandler:(void *)a1;
- (void)setupPresentmentController;

@end
