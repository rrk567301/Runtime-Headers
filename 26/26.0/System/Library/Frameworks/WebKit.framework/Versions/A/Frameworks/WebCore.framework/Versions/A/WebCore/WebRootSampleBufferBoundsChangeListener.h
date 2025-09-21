@class CALayer;

@interface WebRootSampleBufferBoundsChangeListener : NSObject {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__ptr_; } m_callableWrapper; } _callback;
    struct RetainPtr<CALayer> { CALayer *m_ptr; } _rootLayer;
}

- (void)dealloc;
- (void)invalidate;
- (void)stop;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithCallback:(void *)a0;
- (void).cxx_destruct;
- (void)begin:(id)a0;

@end
