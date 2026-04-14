@class NSString;

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
    struct RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> { struct Frame *m_ptr; } _frame;
    struct ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>> { struct ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType> { unsigned long long m_identifier; } m_object; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long m_identifier; } m_processIdentifier; } _identifier;
    struct Function<void (WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>>)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>>>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>>>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>>> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>>>>> { void *__value_; } __ptr_; } m_callableWrapper; } _policyFunction;
    struct RetainPtr<NSURL> { void *m_ptr; } _appLinkURL;
    unsigned char _defaultPolicy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)ignore;
- (void)use;
- (void)download;
- (void)continue;
- (id)initWithFrame:(struct NakedPtr<WebCore::Frame> { struct Frame *x0; })a0 identifier:(struct ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>> { struct ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType> { unsigned long long x0; } x0; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x0; } x1; })a1 policyFunction:(void *)a2 defaultPolicy:(unsigned char)a3;
- (id)initWithFrame:(struct NakedPtr<WebCore::Frame> { struct Frame *x0; })a0 identifier:(struct ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>> { struct ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType> { unsigned long long x0; } x0; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x0; } x1; })a1 policyFunction:(void *)a2 defaultPolicy:(unsigned char)a3 appLinkURL:(id)a4;
- (void)receivedPolicyDecision:(unsigned char)a0;

@end
