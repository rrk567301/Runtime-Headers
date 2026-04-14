@interface WebEditorSpellCheckResponder : NSObject {
    struct WeakPtr<WebEditorClient, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _client;
    struct ObjectIdentifierGeneric<WebCore::TextCheckingRequestIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> { unsigned long long m_identifier; } _identifier;
    struct RetainPtr<NSArray> { void *m_ptr; } _results;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)perform;
- (id)initWithClient:(struct WeakPtr<WebEditorClient, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *x0; } x0; })a0 identifier:(struct ObjectIdentifierGeneric<WebCore::TextCheckingRequestIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> { unsigned long long x0; })a1 results:(id)a2;

@end
