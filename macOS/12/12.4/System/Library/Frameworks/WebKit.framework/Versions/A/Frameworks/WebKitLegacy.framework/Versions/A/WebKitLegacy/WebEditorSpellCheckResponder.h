@interface WebEditorSpellCheckResponder : NSObject {
    struct WeakPtr<WebEditorClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _client;
    struct ObjectIdentifier<WebCore::TextCheckingRequestIdentifierType> { unsigned long long m_identifier; } _identifier;
    struct RetainPtr<NSArray> { void *m_ptr; } _results;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)perform;
- (id)initWithClient:(struct WeakPtr<WebEditorClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *x0; } x0; })a0 identifier:(struct ObjectIdentifier<WebCore::TextCheckingRequestIdentifierType> { unsigned long long x0; })a1 results:(id)a2;

@end
