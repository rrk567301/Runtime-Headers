@class NSString, NSURL;

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
    struct RefPtr<WebCore::LocalFrame, WTF::RawPtrTraits<WebCore::LocalFrame>, WTF::DefaultRefDerefTraits<WebCore::LocalFrame>> { struct LocalFrame *m_ptr; } _frame;
    struct CompletionHandler<void (WebCore::PolicyAction)> { struct Function<void (WebCore::PolicyAction)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction>>> { void *__ptr_; } m_callableWrapper; } m_function; } _policyFunction;
    struct RetainPtr<NSURL> { NSURL *m_ptr; } _appLinkURL;
    struct RetainPtr<NSURL> { NSURL *m_ptr; } _referrerURL;
    unsigned char _defaultPolicy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)continue;
- (void)dealloc;
- (void)invalidate;
- (void)download;
- (id).cxx_construct;
- (void)ignore;
- (void).cxx_destruct;
- (void)use;
- (id)initWithFrame:(struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame *x0; })a0 policyFunction:(void *)a1 defaultPolicy:(unsigned char)a2;
- (id)initWithFrame:(struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame *x0; })a0 policyFunction:(void *)a1 defaultPolicy:(unsigned char)a2 appLinkURL:(id)a3 referrerURL:(id)a4;
- (void)receivedPolicyDecision:(unsigned char)a0;

@end
