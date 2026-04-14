@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _parent;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)begin;
- (id)initWithParent:(void *)a0;

@end
