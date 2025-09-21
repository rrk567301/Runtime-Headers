@interface WKPDFFormMutationObserver : NSObject {
    struct ThreadSafeWeakPtr<WebKit::UnifiedPDFPlugin, WTF::NoTaggingTraits<WebKit::UnifiedPDFPlugin>> { struct TaggedPtr<WebKit::UnifiedPDFPlugin, WTF::NoTaggingTraits<WebKit::UnifiedPDFPlugin>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _plugin;
}

- (id)initWithPlugin:(void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)formChanged:(id)a0;

@end
