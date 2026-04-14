@interface WebAVSampleBufferErrorListener : NSObject {
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _parent;
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _layers;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _renderers;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithParent:(void *)a0;
- (void)layerFailedToDecode:(id)a0;
- (void)audioRendererWasAutomaticallyFlushed:(id)a0;
- (void)beginObservingLayer:(id)a0;
- (void)stopObservingLayer:(id)a0;
- (void)beginObservingRenderer:(id)a0;
- (void)stopObservingRenderer:(id)a0;

@end
