@interface WebAnimationDelegate : NSObject {
    struct ThreadSafeWeakPtr<WebCore::PlatformCALayer, WTF::NoTaggingTraits<WebCore::PlatformCALayer>> { struct TaggedPtr<WebCore::PlatformCALayer, WTF::NoTaggingTraits<WebCore::PlatformCALayer>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } m_owner;
}

- (void)animationDidStart:(id)a0;
- (void)setOwner:(void *)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
