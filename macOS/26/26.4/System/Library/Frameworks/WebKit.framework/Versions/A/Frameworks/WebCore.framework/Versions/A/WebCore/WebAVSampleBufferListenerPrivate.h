@interface WebAVSampleBufferListenerPrivate : NSObject {
    struct ThreadSafeWeakPtr<WebCore::WebAVSampleBufferListenerClient, WTF::NoTaggingTraits<WebCore::WebAVSampleBufferListenerClient>> { struct TaggedPtr<WebCore::WebAVSampleBufferListenerClient, WTF::NoTaggingTraits<WebCore::WebAVSampleBufferListenerClient>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _client;
    struct Vector<WTF::RetainPtr<NSObject<WebSampleBufferVideoRendering>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _videoRenderers;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _audioRenderers;
}

- (id)initWithClient:(struct WebAVSampleBufferListenerClient { void /* function */ **x0; } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)audioRendererWasAutomaticallyFlushed:(id)a0;
- (void)beginObservingAudioRenderer:(id)a0;
- (void)beginObservingVideoRenderer:(id)a0;
- (void)layerFailedToDecode:(id)a0;
- (void)layerReadyForDisplayChanged:(id)a0;
- (void)layerRequiresFlushToResumeDecodingChanged:(id)a0;
- (void)stopObservingAudioRenderer:(id)a0;
- (void)stopObservingVideoRenderer:(id)a0;

@end
