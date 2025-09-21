@class NSString;

@interface WebKitFullScreenListener : NSObject <WebKitFullScreenListener> {
    struct RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> { struct Element *m_ptr; } _element;
    struct CompletionHandler<void (WebCore::ExceptionOr<void>)> { struct Function<void (WebCore::ExceptionOr<void>)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::ExceptionOr<void>>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::ExceptionOr<void>>>> { void *__ptr_; } m_callableWrapper; } m_function; } _initialCompletionHandler;
    struct CompletionHandler<void (bool)> { struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { void *__ptr_; } m_callableWrapper; } m_function; } _finalCompletionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithElement:(void *)a0 initialCompletionHandler:(void *)a1 finalCompletionHandler:(void *)a2;
- (void)webkitDidEnterFullScreen;
- (void)webkitDidExitFullScreen;
- (void)webkitWillEnterFullScreen;
- (void)webkitWillExitFullScreen;

@end
