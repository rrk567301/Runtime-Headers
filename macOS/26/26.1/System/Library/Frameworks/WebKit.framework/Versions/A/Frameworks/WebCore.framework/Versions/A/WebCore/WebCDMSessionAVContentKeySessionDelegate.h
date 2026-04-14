@class NSString;

@interface WebCDMSessionAVContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate> {
    struct ThreadSafeWeakPtr<WebCore::CDMSessionAVContentKeySession, WTF::NoTaggingTraits<WebCore::CDMSessionAVContentKeySession>> { struct TaggedPtr<WebCore::CDMSessionAVContentKeySession, WTF::NoTaggingTraits<WebCore::CDMSessionAVContentKeySession>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } m_parent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id).cxx_construct;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void).cxx_destruct;
- (id)initWithParent:(void *)a0;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)a0;

@end
